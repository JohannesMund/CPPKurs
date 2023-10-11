#pragma once

#include <iostream>
#include <string>

class person
{
public:
    person();
    person(std::string name, int alter, std::string berufung);

    void setName(std::string s);
    void setAge(int i);
    void setBerufung(std::string s);

    void output() const;

private:
    std::string _name;
    int _alter;
    std::string _berufung;
};
