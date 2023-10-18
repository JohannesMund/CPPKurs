#include "cgericht.h"

#include <iostream>

CGericht::CGericht(const std::string& name)
{
    _name = name;
}

void CGericht::addZutat(const EZutaten zutat)
{
    _zutaten.push_back(zutat);
}

void CGericht::output() const
{
    using namespace std;
    cout << "================================" << endl;
    cout << "Futter Fassen!:" << endl;
    cout << "Das Gericht heißt: " << _name << endl;
    cout << "und besteht aus: " << endl;

    for (auto z : _zutaten)
    {
        cout << z << endl;
    }

    cout << "================================" << endl;
}
