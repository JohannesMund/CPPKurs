#pragma once

#include "cmeal.h"
#include <iostream>
#include <string>

class CPerson
{
public:
    CPerson();
    CPerson(const std::string& name, const int alter, const std::string& berufung, CMeal*);

    void setName(const std::string& s);
    void setAge(const int i);
    void setProfession(const std::string& s);
    void setfavouriteMeal(CMeal* m);

    std::string getName() const;
    int getAge() const;
    std::string getProfession() const;
    CMeal* getfavouriteMeal() const;

    void output() const;

private:
    std::string _name;
    int _age;
    std::string _profession;
    CMeal* _favouriteMeal;
};
