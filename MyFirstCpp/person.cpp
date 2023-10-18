#include "person.h"

#include <iostream>
#include <string>

person::person() : person("eine nicht näher benannt sein wollende Person", 0, "")

{
}

person::person(const std::string& name, const int alter, const std::string& profession)
{
    setName(name);
    setAge(alter);
    setProfession(profession);
    std::cout << "Es macht *Ploppp* und " << _name << " erscheint aus dem Nichts, steht da, und guckt sparsam."
              << std::endl;
}

void person::setName(const std::string& s)
{
    _name = s;
}

void person::setAge(const int i)
{
    _age = i;
}

void person::setProfession(const std::string& s)
{
    _profession = s;
}

std::string person::getName() const
{
    return _name;
}

int person::getAge() const
{
    return _age;
}

std::string person::getProfession() const
{
    return _profession;
}

void person::output() const
{
    using namespace std;
    cout << "================================" << endl;
    cout << "eine Person:" << endl;
    cout << "Name: " << _name << " (" << _age << ")" << endl;
    cout << " - " << _profession << " -" << endl;
    cout << "Und alle so: \"Hallo " << _name << "\"" << endl;
    cout << "================================" << endl;
}
