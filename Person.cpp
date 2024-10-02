#include <iostream>
#include <string>
#include "Person.h"

std::string Person::get_name()
{
    return name;
}

std::string Person::get_tel()
{
    return tel;
}

void Person::set(std::string name, std::string tel)
{
    this->name = name;
    this->tel = tel;
}
