#include "cperson.h"

#include <iostream>
#include <string>

CPerson::CPerson() : CPerson("eine nicht näher benannt sein wollende Person", 0, "")
{
}

CPerson::CPerson(const std::string& name, const int alter, const std::string& profession)
{
    setName(name);
    setAge(alter);
    setProfession(profession);
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

void CPerson::output() const
{
    using namespace std;
    cout << "================================" << endl;
    cout << "eine Person:" << endl;
    cout << "Name: " << _name << " (" << _age << ")" << endl;
    cout << " - " << _profession << " -" << endl;
    cout << "Und alle so: \"Hallo " << _name << "\"" << endl;
    cout << "================================" << endl;
}
