# Aisd

To run Assignment 1 
first go to Assignment2 then module2.1 and run the following commands
-
ros2 run my_marker_package physics
-
ros2 run my_marker_package marker_publisher2

and you can visualize it in rviz

To run Assignment 2
go to the 2dof folder and run the following commands
to visualize it in gazebo-ros2 launch urdf_tutorial display.launch.py model:=/home/rohit/2dof/src/my_robot/urdf/arm.xacro.urdf
to visualizr it in rviz2-ros2 launch urdf_tutorial display.launch.py model:=/home/rohit/MODULEAisd/2dof/src/my_robot/urdf/arm.xacro.urdf
(Adjust path accordingly)


To run Assignment 3 -
go the iitb-racecar folder
to run bicycle model - ros2 run dynamic_bicycle_pkg nodeb &  ros2 run odom_cmd_pkg node
to control -ros2 run teleop_twist_keyboard teleop_twist_keyboard
You may visulize it in rviz2


