#pragma once

#include "cmeal.h"
#include <iostream>
#include <string>
#include <functional>

class CPerson
{
public:
    CPerson();
    CPerson(const std::string& name, const int alter, const std::string& berufung, CMeal* favouriteMeal);

    void setName(const std::string& s);
    void setAge(const int i);
    void setProfession(const std::string& s);
    void setfavouriteMeal(CMeal* m);

    std::string getName() const;
    int getAge() const;
    std::string getProfession() const;
    CMeal* getfavouriteMeal() const;

    virtual void output() const;

    const bool operator==(const CPerson& p2){
        return _name == p2.getName();
    }


    const bool operator==(const std::string& name){
        return _name == name;
    }

    const bool operator<(const CPerson& p2){
        return _age < p2.getAge();
    }




    static std::function<bool(const CPerson&)> ageLtFilter(const int age)
    {
        return [age](const CPerson &p){return p.getAge() < age;};
    }


    static std::function<bool(const CPerson&)> isMinor()
    {
        return ageLtFilter(18);
    }

private:
    std::string _name;
    int _age;
    std::string _profession;
    CMeal* _favouriteMeal;
};
