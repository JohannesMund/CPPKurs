#include "cperson.h"

#include <iostream>
#include <string>

CPerson::CPerson() : CPerson("eine nicht naeher benannt sein wollende Person", 0, "", nullptr)
{
}

CPerson::CPerson(const std::string& name, const int age, const std::string& profession, CMeal* favouriteMeal)
{
    _favouriteMeal = favouriteMeal;
    setName(name);
    setAge(age);
    setProfession(profession);
    setfavouriteMeal(favouriteMeal);
    std::cout << "Es macht *Ploppp* und " << _name << " erscheint aus dem Nichts, steht da, und guckt sparsam."
              << std::endl;
}

void CPerson::setName(const std::string& s)
{
    _name = s;
}

void CPerson::setAge(const int i)
{
    _age = i;
}

void CPerson::setProfession(const std::string& s)
{
    _profession = s;
}

void CPerson::setfavouriteMeal(CMeal* m)
{
    _favouriteMeal = m;
}

std::string CPerson::getName() const
{
    return _name;
}

int CPerson::getAge() const
{
    return _age;
}

std::string CPerson::getProfession() const
{
    return _profession;
}

CMeal* CPerson::getfavouriteMeal() const
{
    return _favouriteMeal;
}

void CPerson::output() const
{
    using namespace std;
    cout << "================================" << endl;
    cout << "eine Person:" << endl;
    cout << "Name: " << _name << " (" << _age << ")" << endl;
    cout << " - " << _profession << " -" << endl;
    cout << "Lieblingsgericht: " << _favouriteMeal->getName() << endl;
    cout << "Und alle so: \"Hallo " << _name << "\"" << endl;
    cout << "================================" << endl;
}
