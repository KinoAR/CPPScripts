#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

float calculateBMI(int inches, int pounds) {
  float height = inches * 0.025;
  return ((float)pounds * 0.45 / (( height * height)));
}

int main() {
  int height = 0;
  int weight = 0;
  float bmi = 0.0;
  std::cout << "**** BMI Calculator ****\n";
  std::cout << "Enter height in inches: ";
  std::cin >> height;
  std::cout << "Enter weight in pounds: ";
  std::cin >> weight;
  bmi = calculateBMI(height, weight);
  std::string  bmistr = "Your BMI is: " + std::to_string(bmi);
  std::cout << bmistr;

  return 0;
}