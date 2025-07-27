import rclpy
from rclpy.node import Node
from custom_interfaces.srv import ChangeVar
from std_msgs.msg import Int32   
import math

L1 = 1.0  # Length of first arm link
L2 = 1.0

class AdditionService (Node):
    def __init__(self):
        super().__init__('service')
        self.publisher = self.create_publisher(Int32, 'variable_topic', 10)  # Create a publisher
        self.publisher2 = self.create_publisher(Int32, 'variable_topic1', 10)  # Create a publisher
     
        self.service = self.create_service(
            ChangeVar,
            "change_var",
            self.add_two_ints_callback

            
        )
    def add_two_ints_callback(self, request, response):
        self.variable1 = request.a
        self.variable2 = request.b
        msg = Int32()
        msg2 = Int32()
        msg2.data = self.variable2
        msg.data = self.variable1
        self.publisher.publish(msg)
        self.publisher2.publish(msg2)  # Publish the updated value
        response.c = request.a
        response.d = request.b
        self.get_logger().info(f"Request: {request.a} and  {request.b}")
        self.get_logger().info(f"Responce , new variables are : {response.c} and {response.d}")
        
        
        return response  
    


def main(args=None):
    rclpy.init(args=args)
   
    
    addition_service = AdditionService()
    rclpy.spin(addition_service)
    addition_service.destroy_node()
    rclpy.shutdown()
if __name__ == "__main__":
    main()