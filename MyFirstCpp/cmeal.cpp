#include "CMeal.h"

#include <iostream>

std::string CMeal::ingredients2String(CMeal::EIngredients zutat)
{
    switch (zutat)
    {
    case EIngredients::eWasser:
        return "Wasser";
    case EIngredients::eSalz:
        return "Salz";
    case EIngredients::eMehl:
        return "Mehl";
    case EIngredients::eKaese:
        return "Kaese";
    case EIngredients::eNudeln:
        return "Nudeln";
    case EIngredients::eTomaten:
        return "Tomaten";
    case EIngredients::eSalami:
        return "Salami";
    case EIngredients::eSchlampampignons:
        return "Champignons";
    case EIngredients::eZwiebeln:
        return "Zwiebeln";
    case EIngredients::eKnoblauch:
        return "Knoblauch";
    case EIngredients::eKapern:
        return "Kapern";
    case EIngredients::eHackfleisch:
        return "Hackfleisch";
    case EIngredients::eParmesan:
        return "Parmesan";
    case EIngredients::ePfeffer:
        return "Pfeffer";
    case EIngredients::eKarotten:
        return "Karotten";
    case EIngredients::eBasilikum:
        return "Basilikum";
    default:
        return "unbekannte Zutat";
    }
}
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
    cout << "und besteht aus: " << endl;

    for (auto z : _ingredients)
    {
        cout << ingredients2String(z) << endl;
    }

    cout << "================================" << endl;
}
