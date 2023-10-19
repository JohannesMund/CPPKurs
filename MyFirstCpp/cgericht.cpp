#include "cgericht.h"

#include <iostream>

std::string CGericht::convertZutatenToString(CGericht::EZutaten zutat) const {
  switch (zutat) {
  case EZutaten::eWasser:
    return "Wasser";
  case EZutaten::eSalz:
    return "Salz";
  case EZutaten::eMehl:
    return "Mehl";
  case EZutaten::eKaese:
    return "Kaese";
  case EZutaten::eNudeln:
    return "Nudeln";
  case EZutaten::eTomaten:
    return "Tomaten";
  case EZutaten::eSalami:
    return "Salami";
  case EZutaten::eSchlampampignons:
    return "Champignons";
  case EZutaten::eZwiebeln:
    return "Zwiebeln";
  case EZutaten::eKnoblauch:
    return "Knoblauch";
  case EZutaten::eKapern:
    return "Kapern";
  case EZutaten::eHackfleisch:
    return "Hackfleisch";
  case EZutaten::eParmesan:
    return "Parmesan";
  case EZutaten::ePfeffer:
    return "Pfeffer";
  case EZutaten::eKarotten:
    return "Karotten";
  case EZutaten::eBasilikum:
    return "Basilikum";
  default:
    return "unbekannte Zutat";
  }
}

CGericht::CGericht(const std::string &name) { _name = name; }

void CGericht::addZutat(const EZutaten zutat) { _zutaten.push_back(zutat); }

void CGericht::output() const {
  using namespace std;
  cout << "================================" << endl;
  cout << "Futter Fassen!" << endl;
  cout << "Das Gericht heißt: " << _name << endl;
  cout << "und besteht aus: " << endl;

  for (auto z : _zutaten) {
    cout << convertZutatenToString(z) << endl;
  }

  cout << "================================" << endl;
}
