#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>

int main(int argc, char * argv[]) {
  std::string output;
  std::string temp;

  if (argc >= 2)
  {
    for (int i = 1; i < argc; i++) {
       temp += argv[i];
       temp += " ";
    }
    std::reverse(temp.begin(), temp.end());
    output += temp + " ";
  }
  std::cout << output << std::endl;
  return 0;
}