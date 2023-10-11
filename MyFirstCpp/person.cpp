#include "person.h"

#include <iostream>
#include <string>

person::person()
{
    person("", 0, "");
}

person::person(std::string name, int alter, std::string berufung)
{
    setName(name);
    setAge(alter);
    setBerufung(berufung);
}

void person::setName(std::string s)
{
    _name = s;
}

void person::setAge(int i)
{
    _alter = i;
}

void person::setBerufung(std::string s)
{
    _berufung = s;
}

void person::output() const
{
    using namespace std;
    cout << "eine Person:" << endl;
    cout << "Name: " << _name << " (" << _alter << ")" << endl;
    cout << _berufung << endl;
    cout << "========" << endl;
}
