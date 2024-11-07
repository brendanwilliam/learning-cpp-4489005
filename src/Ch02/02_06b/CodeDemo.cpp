// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

/* DIRECTIVES */
#define CAPACITY 5000
#define DEBUG


int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "The large integer is " << large << std::endl;
    std::cout << "The small integer is " << small << std::endl;
#endif
    large += small;
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
