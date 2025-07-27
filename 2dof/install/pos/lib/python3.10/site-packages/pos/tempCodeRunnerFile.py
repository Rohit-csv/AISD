    def callback(self, msg , msg2):
        self.get_logger().info(f'Received variable value: {msg.data1 + msg2.data}')