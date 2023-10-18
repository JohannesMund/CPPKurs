#include "cgericht.h"

#include <iostream>

CMeal::CMeal(const std::string& name)
{
    _name = name;
}

void CMeal::addIngredient(const EIngredients zutat)
{
    _ingredients.push_back(zutat);
}

void CMeal::output() const
{
    using namespace std;
    cout << "================================" << endl;
    cout << "Futter Fassen!" << endl;
    cout << "Heute gibt es: " << _name << endl;
    cout << "Das besteht aus: " << endl;

    for (auto z : _ingredients)
    {
        cout << (int)z << endl;
    }

    cout << "================================" << endl;
}
