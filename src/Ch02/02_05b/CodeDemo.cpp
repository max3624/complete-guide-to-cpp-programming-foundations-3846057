// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){

    bool my_Flag;

    a = 7;
    my_Flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_Flag = " << my_Flag << std::endl;

    my_Flag = true;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    std::cout << "my_Flag = " << my_Flag << std::endl;
 

    std::cout << std::endl << std::endl;
    return 0;
}
