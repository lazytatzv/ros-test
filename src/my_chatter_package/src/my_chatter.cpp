#include <iostream>
#include <cstdio>
#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

class myPublisher : public rclcpp::Node 
{
  public:
    myPublisher()
    : Node("myPublisher")
    {

    }
  private:

};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv); // initialize ros2
  rclcpp::spin(std::make_shared<myPublisher>());
  rclcpp::shutdown();
  return 0;
}
