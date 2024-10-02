#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
private:
    std::string name;
    std::string tel;
public:
    std::string get_name();
    std::string get_tel();
    void set(std::string name, std::string tel);
};

#endif // PERSON_H
