// Ask for person's name, and greet the person
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    
    const std::string exclam = "!";
    const std::string greeting = "Hello, " + name + exclam;

    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    const std::string first(second.size(), '*');
    
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}