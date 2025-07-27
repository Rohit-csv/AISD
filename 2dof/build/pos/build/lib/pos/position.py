import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32  # Message type for receiving data

class VariableSubscriber(Node):
    def __init__(self):
        super().__init__('position')
        self.subscription = self.create_subscription(Int32, 'variable_topic', self.callback, 10)

    def callback(self, msg ):
        self.get_logger().info(f'Received variable value: {msg.data }')
        
  


def main(args=None):
    rclpy.init(args=args)
    subscriber = VariableSubscriber()
    rclpy.spin(subscriber)
    subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
