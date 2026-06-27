#include <iostream>
#include <string>

int main() {
    std::cout << "Hello world" << std::endl;
    std::cout << "This project uses the C++14 language standard version." << std::endl;

    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
