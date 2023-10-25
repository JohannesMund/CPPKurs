#include <iostream>
#include <string>

#include "cmeal.h"
#include "cperson.h"

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
    pizza.addIngredient(CMeal::EIngredients::eMehl);
    pizza.addIngredient(CMeal::EIngredients::eWasser);
    pizza.addIngredient(CMeal::EIngredients::eSalz);
    pizza.addIngredient(CMeal::EIngredients::eTomaten);
    pizza.addIngredient(CMeal::EIngredients::eSalami);
    pizza.addIngredient(CMeal::EIngredients::eKaese);

    pizza.output();

    CMeal NudelnMitTomatensauce("Nudeln mit Tomatensauce");
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::eWasser);
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::eNudeln);
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::eTomaten);
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::eZwiebeln);
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::eSalz);
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::ePfeffer);
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::eKnoblauch);
    NudelnMitTomatensauce.addIngredient(CMeal::EIngredients::eBasilikum);

    NudelnMitTomatensauce.output();

    CMeal NudelnBolognese("Nudeln mit Bolognesesauce");
    NudelnBolognese.addIngredient(CMeal::EIngredients::eNudeln);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eWasser);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eHackfleisch);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eSalz);
    NudelnBolognese.addIngredient(CMeal::EIngredients::ePfeffer);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eZwiebeln);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eKarotten);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eTomaten);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eKnoblauch);
    NudelnBolognese.addIngredient(CMeal::EIngredients::eParmesan);

    NudelnBolognese.output();

    CPerson anne;

    anne.setName("Anne");
    anne.setAge(16);
    anne.setProfession("Schülerin");

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
