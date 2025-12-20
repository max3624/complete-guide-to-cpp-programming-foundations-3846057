// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class asset_type2 {one, two, three, texture, sound};

int main(){
    //int sound = 8;
    asset_type asset_value;
    asset_type2 asset_value2;

    asset_value = asset_type::sound;
    asset_value2 = asset_type2::sound;   

    std::cout << "asset_value = " << (int) asset_value << std::endl;
    std::cout << "asset_value = " << (int) asset_value2 << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
