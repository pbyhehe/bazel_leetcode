#include <ctime>
#include <string>
#include <iostream>

std::string get_greet(const std::string& who) {
  return "Hello " + who;
}

int main() {
  std::string who = "world";
  std::cout << get_greet(who) << std::endl;
  return 0;
}
