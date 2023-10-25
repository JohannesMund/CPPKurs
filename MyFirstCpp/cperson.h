#pragma once

#include <iostream>
#include <string>

class CPerson
{
public:
    CPerson();
    CPerson(const std::string& name, const int alter, const std::string& berufung);

    void setName(const std::string& s);
    void setAge(const int i);
    void setProfession(const std::string& s);

    std::string getName() const;
    int getAge() const;
    std::string getProfession() const;

    void output() const;

private:
    std::string _name;
    int _age;
    std::string _profession;
};
