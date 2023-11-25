cmake_minimum_required(VERSION 3.16.3)

project(first_node)

#include_directories 添加特定的头文件搜索路径 ，相当于指定g++编译器的-I参数
include_directories(/opt/ros/galactic/include/rclcpp/)
include_directories(/opt/ros/galactic/include/rcl/)
include_directories(/opt/ros/galactic/include/rcutils/)
include_directories(/opt/ros/galactic/include/rcl_yaml_param_parser/)
include_directories(/opt/ros/galactic/include/rosidl_runtime_c/)
include_directories(/opt/ros/galactic/include/rosidl_typesupport_interface/)
include_directories(/opt/ros/galactic/include/rcpputils/)
include_directories(/opt/ros/galactic/include/builtin_interfaces/)
include_directories(/opt/ros/galactic/include/rmw/)
include_directories(/opt/ros/galactic/include/rosidl_runtime_cpp/)
include_directories(/opt/ros/galactic/include/tracetools/)
include_directories(/opt/ros/galactic/include/rcl_interfaces/)
include_directories(/opt/ros/galactic/include/libstatistics_collector/)
include_directories(/opt/ros/galactic/include/statistics_msgs/)

# link_directories - 向工程添加多个特定的库文件搜索路径，相当于指定g++编译器的-L参数
link_directories(/opt/ros/galactic/lib/)

# add_executable - 生成first_node可执行文件
add_executable(first_node first_ros2_node.cpp)

# target_link_libraries - 为first_node(目标) 添加需要动态链接库，相同于指定g++编译器-l参数
# 下面的语句代替 -lrclcpp -lrcutils
target_link_libraries(first_node rclcpp rcutils)

