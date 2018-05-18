#include <iostream>
#include <iomanip>

int main ()
{
    std::cout << "Hello, udemy users!\n";
    std::cout << 4080 << std::endl;

    std::cout << std::setw (5) << 2018 << " is today's year." << std::endl;
    std::cout << std::setw (5) << 5 << " is today's month." << std::endl;
    std::cout << std::setw (5) << 18 << " is today's day." << std::endl;

    return 0;
}
