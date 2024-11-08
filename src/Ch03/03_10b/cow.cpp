#include "cow.h"
#include <iostream>

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::get_name(){
    return name;
}
int cow::get_age(){
    return age;
}
cow_purpose cow::get_purpose(){
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}
void cow::birthday(){
    age++;
    std::cout << "Happy Birthday " << name << "!\n\n" << "You are " << age << " years old!\n\n" << std::endl;
}
