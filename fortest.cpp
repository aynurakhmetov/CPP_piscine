#include <iostream>

int main()
{
    std::string str = "Hello";
    str.replace(0, 1, "a");
    std::cout << str << std::endl;
    return (0);
}
