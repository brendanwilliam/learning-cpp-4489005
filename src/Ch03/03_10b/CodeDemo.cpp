// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> herd;

    herd.push_back(cow("Lisa Barlow", 3, cow_purpose::pet));
    herd.push_back(cow("Mary Cosby", 5, cow_purpose::pet));
    herd.push_back(cow("Whitney Rose", 2, cow_purpose::pet));

    std::cout << "The first cow is " << herd.begin()->get_name() << std::endl;
    std::cout << "The last cow is " << prev(herd.end(), 1)->get_name() << std::endl;
    std::cout << "And the middle one... is... " << herd[1].get_name() << std::endl;

    std::cout << "\n\n\n================\n\nHOLD YOUR COWS! It's time to celebrate some birthdays...\n\n" << std::endl;

    for (auto &c : herd){
        c.birthday();
    }

    std::cout << std::endl << std::endl;
    return (0);
}
