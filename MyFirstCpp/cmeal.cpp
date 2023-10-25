#include "cmeal.h"

#include <iostream>

CMeal::CMeal(const std::string& name)
{
    _name = name;
}

void CMeal::addIngredient(const Ingredients::EIngredients ingredient)
{
    _ingredients.push_back(ingredient);
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
        cout << " * " << ingredient2String(z) << endl;
    }
    cout << "================================" << endl;
}

std::string CMeal::ingredient2String(const Ingredients::EIngredients ingredient)
{
    return Ingredients::toString(ingredient);
}
