#include <iostream>
#include <string>

#include "cgericht.h"
#include "person.h"

using namespace std;

void output(string s) { cout << s << endl << flush; }

string input() {
  string s;
  output("Name eingeben:");
  cin >> s;
  return s;
}

int main() {

  CGericht pizza("Pizza");
  pizza.addZutat(CGericht::EZutaten::eMehl);
  pizza.addZutat(CGericht::EZutaten::eWasser);
  pizza.addZutat(CGericht::EZutaten::eSalz);
  pizza.addZutat(CGericht::EZutaten::eTomaten);
  pizza.addZutat(CGericht::EZutaten::eSalami);
  pizza.addZutat(CGericht::EZutaten::eKaese);

  pizza.output();

  CGericht NudelnMitTomatensauce("Nudeln mit Tomatensauce");
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::eWasser);
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::eNudeln);
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::eTomaten);
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::eZwiebeln);
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::eSalz);
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::ePfeffer);
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::eKnoblauch);
  NudelnMitTomatensauce.addZutat(CGericht::EZutaten::eBasilikum);

  NudelnMitTomatensauce.output();

  CGericht NudelnBolognese("Nudeln mit Bolognesesauce");
  NudelnBolognese.addZutat(CGericht::EZutaten::eNudeln);
  NudelnBolognese.addZutat(CGericht::EZutaten::eWasser);
  NudelnBolognese.addZutat(CGericht::EZutaten::eHackfleisch);
  NudelnBolognese.addZutat(CGericht::EZutaten::eSalz);
  NudelnBolognese.addZutat(CGericht::EZutaten::ePfeffer);
  NudelnBolognese.addZutat(CGericht::EZutaten::eZwiebeln);
  NudelnBolognese.addZutat(CGericht::EZutaten::eKarotten);
  NudelnBolognese.addZutat(CGericht::EZutaten::eTomaten);
  NudelnBolognese.addZutat(CGericht::EZutaten::eKnoblauch);
  NudelnBolognese.addZutat(CGericht::EZutaten::eParmesan);

  NudelnBolognese.output();

  person anne;

  anne.setName("Anne");
  anne.setAge(16);
  anne.setProfession("Schülerin");

  person carlos("Carlos", 25, "Brain");
  person fabian("Fabian", 28, "Auszubildender");
  person david("David", 27, "Auszubildender");
  person hannes("Hannes", 45, "Ausbildungspapa");

  person azubihorde[4] = {anne, carlos, fabian, david};

  for (auto const &p : azubihorde) {
    p.output();
  }

  return 0;
}
