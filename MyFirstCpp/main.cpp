#include <iostream>
#include <string>

#include "cmeal.h"
#include "cperson.h"
#include "ingredients.h"

using namespace std;

void output(string s)
{
    cout << s << endl << flush;
}

string input()
{
    string s;
    output("Name eingeben:");
    cin >> s;
    return s;
}

int main()
{

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

    CPerson anne;

    anne.setName("Anne");
    anne.setAge(16);
    anne.setProfession("Schuelerin");

    CPerson carlos("Carlos", 25, "Brain");
    CPerson fabian("Fabian", 28, "Auszubildender");
    CPerson david("David", 27, "Auszubildender");
    CPerson hannes("Hannes", 45, "Ausbildungspapa");

    CPerson azubihorde[4] = {anne, carlos, fabian, david};

    for (auto const& p : azubihorde)
    {
        p.output();
    }

    return 0;
}
