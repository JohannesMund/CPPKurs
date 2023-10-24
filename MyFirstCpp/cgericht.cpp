#include "cgericht.h"

#include <iostream>

CGericht::CGericht(const std::string &name) { _name = name; }

void CGericht::addZutat(const EZutaten zutat) { _zutaten.push_back(zutat); }

void CGericht::output() const
{
    using namespace std;
    cout << "================================" << endl;
    cout << "Futter Fassen!:" << endl;
    cout << "Das Gericht heißt: " << _name << endl;
    cout << "und besteht aus: " << endl;

    for (const auto z : _zutaten)
    {
        printZutat(z);
    }

    cout << "================================" << endl;
}

void CGericht::printZutat(const EZutaten zutat) const
{
    switch (zutat)
    {
        case CGericht::EZutaten::eWasser: std::cout << "💧" << std::endl; break;
        case CGericht::EZutaten::eSalz: std::cout << "🧂" << std::endl; break;
        case CGericht::EZutaten::eMehl: std::cout << "💨" << std::endl; break;
        case CGericht::EZutaten::eKaese: std::cout << "🧀" << std::endl; break;
        case CGericht::EZutaten::eNudeln: std::cout << "🍜" << std::endl; break;
        case CGericht::EZutaten::eTomaten: std::cout << "🍅" << std::endl; break;
        case CGericht::EZutaten::eSalami: std::cout << "🥓" << std::endl; break;
        case CGericht::EZutaten::eSchlampampignons: std::cout << "🍄" << std::endl; break;
        case CGericht::EZutaten::eZwiebeln: std::cout << "🧅" << std::endl; break;
        case CGericht::EZutaten::eKnoblauch:
            std::cout << "🧄" << std::endl;
            //            ︶
            break;
        case CGericht::EZutaten::eKapern: std::cout << "🟢" << std::endl; break;
        case CGericht::EZutaten::eSchinken: std::cout << "🥓" << std::endl; break;
        case CGericht::EZutaten::eAnanas: std::cout << "🍍" << std::endl; break;
    }
}
