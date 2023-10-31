#include <iostream>
#include <string>

#include "cmeal.h"
#include "cperson.h"
#include "ingredients.h"

using namespace std;

void output(string s) { cout << s << endl << flush; }

string input() {
  string s;
  output("Name eingeben:");
  cin >> s;
  return s;
}

int main() {

  CMeal pizza("Pizza");
  pizza.addIngredient(Ingredients::EIngredients::eMehl);
  pizza.addIngredient(Ingredients::EIngredients::eWasser);
  pizza.addIngredient(Ingredients::EIngredients::eSalz);
  pizza.addIngredient(Ingredients::EIngredients::eTomaten);
  pizza.addIngredient(Ingredients::EIngredients::eSalami);
  pizza.addIngredient(Ingredients::EIngredients::eKaese);

  pizza.output();

  CMeal NudelnMitTomatensauce("Nudeln mit Tomatensauce");
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::eWasser);
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::eNudeln);
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::eTomaten);
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::eZwiebeln);
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::eSalz);
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::ePfeffer);
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::eKnoblauch);
  NudelnMitTomatensauce.addIngredient(Ingredients::EIngredients::eBasilikum);

  NudelnMitTomatensauce.output();

  CMeal NudelnBolognese("Nudeln mit Bolognesesauce");
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eNudeln);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eWasser);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eHackfleisch);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eSalz);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::ePfeffer);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eZwiebeln);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eKarotten);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eTomaten);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eKnoblauch);
  NudelnBolognese.addIngredient(Ingredients::EIngredients::eParmesan);

  NudelnBolognese.output();

  CMeal pizzaAnanas("Pizza Ananas");
  pizzaAnanas.addIngredient(Ingredients::EIngredients::eMehl);
  pizzaAnanas.addIngredient(Ingredients::EIngredients::eWasser);
  pizzaAnanas.addIngredient(Ingredients::EIngredients::eSalz);
  pizzaAnanas.addIngredient(Ingredients::EIngredients::eTomaten);
  pizzaAnanas.addIngredient(Ingredients::EIngredients::eAnanas);
  pizzaAnanas.addIngredient(Ingredients::EIngredients::eKaese);

  pizzaAnanas.output();

  CMeal wrapmitlasagne("Wrap mit Lasagne");
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eHackfleisch);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eSalz);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::ePfeffer);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eZwiebeln);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eKarotten);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eTomaten);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eKnoblauch);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eParmesan);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eLasagneplatten);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eMilch);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eButter);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eMehl);
  wrapmitlasagne.addIngredient(Ingredients::EIngredients::eWraps);

  wrapmitlasagne.output();

  CMeal toteOma("tote Oma");
  toteOma.addIngredient(Ingredients::EIngredients::eBlutwurst);
  toteOma.addIngredient(Ingredients::EIngredients::eSauerkraut);
  toteOma.addIngredient(Ingredients::EIngredients::eKartoffeln);
  toteOma.addIngredient(Ingredients::EIngredients::eErbsen);

  toteOma.output();

  CPerson anne;

  anne.setName("Anne");
  anne.setAge(16);
  anne.setProfession("Schuelerin");
  anne.setfavouriteMeal("Pizza Ananas");

  CPerson carlos("Carlos", 25, "Brain", "Wrap mit Lasagne");
  CPerson fabian("Fabian", 28, "Auszubildender", "Pizza");
  CPerson david("David", 27, "Auszubildender", "Nudeln mit Tomatensauce");
  CPerson hannes("Hannes", 45, "Ausbildungspapa", "Tote Oma");

  CPerson azubihorde[4] = {anne, carlos, fabian, david};

  for (auto const &p : azubihorde) {
    p.output();
  }
  hannes.output();

  return 0;
}
