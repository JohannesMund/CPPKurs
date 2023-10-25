#include "CMeal.h"

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
    cout << "und besteht aus: " << endl;
    for (auto i : _ingredients)
    {
        cout << Ingredients::ingredients2String(i) << endl;
    }
    cout << "================================" << endl;
}
