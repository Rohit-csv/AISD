import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
import numpy as np

class JointController(Node):
    def __init__(self):
        super().__init__('joint_controller')
        
        # Publisher to send joint angles
        self.publisher = self.create_publisher(JointState, '/joint_states', 10)
        
        # Timer to publish commands at 10 Hz
        self.timer = self.create_timer(0.1, self.control_joints)

        # Link lengths
        self.L1 = 0.4
        self.L2 = 0.3

        # Target X, Y coordinates
        self.target_x = 0.4
        self.target_y = 0.2

    def inverse_kinematics(self, x, y):
        """Compute joint angles θ1 and θ2 using inverse kinematics."""
        L1, L2 = self.L1, self.L2
        d = (x**2 + y**2 - L1**2 - L2**2) / (2 * L1 * L2)

        # Check if the target point is reachable
        if abs(d) > 1.0:
            self.get_logger().warn("Target out of reach!")
            return 0.0, 0.0
        
        theta2 = np.arccos(d)
        theta1 = np.arctan2(y, x) - np.arctan2(L2 * np.sin(theta2), L1 + L2 * np.cos(theta2))

        return theta1, theta2

    def control_joints(self):
        # Compute joint angles based on target position
        theta1, theta2 = self.inverse_kinematics(self.target_x, self.target_y)

        # Publish JointState message
        joint_msg = JointState()
        joint_msg.name = ["joint1", "joint2"]
        joint_msg.position = [theta1, theta2]

        self.publisher.publish(joint_msg)
        self.get_logger().info(f'Published Joint Angles: θ1={theta1:.2f}, θ2={theta2:.2f}')

def main(args=None):
    rclpy.init(args=args)
    node = JointController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
