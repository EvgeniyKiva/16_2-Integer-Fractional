#include <iostream>
#include <string>

int main() {

    int integer, fractional;
    float number;


    std::cout << "Enter the integer part of the number - " << std::endl;
    std::cin >> integer;
    std::cout << "Enter the fractional part of the number - " << std::endl;
    std::cin >> fractional;

    std::string temp_fractional = std::to_string(fractional);
    std::string temp_integer = std::to_string(integer);
    std::string result=temp_integer+"."+temp_fractional;

    number=std::stof(result);
    std::cout << number;




    return 0;
}
