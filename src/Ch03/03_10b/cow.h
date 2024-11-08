#pragma once

#ifndef COW_H
#define COW_H
#include <string>

enum class cow_purpose {pet, consultant, lawyer, politician};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name();
    int get_age();
    cow_purpose get_purpose();
    void set_age(int new_age);
    void birthday();
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

#endif // COW_H
