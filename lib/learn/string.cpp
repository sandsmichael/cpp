#include <iostream>
#include <string>

int main()
{

    std::cout << "enter a number" << std::endl;
    
    std::string greeting;
    getline(std::cin, greeting);
    std::cout << "User input: " << greeting << std::endl;



}