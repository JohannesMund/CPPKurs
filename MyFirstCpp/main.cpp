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

    CMeal Pizza("Pizza");
    Pizza.addIngredient(Ingredients::EIngredients::eMehl);
    Pizza.addIngredient(Ingredients::EIngredients::eWasser);
    Pizza.addIngredient(Ingredients::EIngredients::eSalz);
    Pizza.addIngredient(Ingredients::EIngredients::eTomaten);
    Pizza.addIngredient(Ingredients::EIngredients::eSalami);
    Pizza.addIngredient(Ingredients::EIngredients::eKaese);

    Pizza.output();

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

    CMeal PizzaAnanas("Pizza Ananas");
    PizzaAnanas.addIngredient(Ingredients::EIngredients::eMehl);
    PizzaAnanas.addIngredient(Ingredients::EIngredients::eWasser);
    PizzaAnanas.addIngredient(Ingredients::EIngredients::eSalz);
    PizzaAnanas.addIngredient(Ingredients::EIngredients::eTomaten);
    PizzaAnanas.addIngredient(Ingredients::EIngredients::eAnanas);
    PizzaAnanas.addIngredient(Ingredients::EIngredients::eKaese);

    PizzaAnanas.output();

    CMeal WrapMitLasagne("Wrap mit Lasagne");
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eHackfleisch);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eSalz);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::ePfeffer);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eZwiebeln);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eKarotten);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eTomaten);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eKnoblauch);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eParmesan);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eLasagneplatten);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eMilch);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eButter);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eMehl);
    WrapMitLasagne.addIngredient(Ingredients::EIngredients::eWraps);

    WrapMitLasagne.output();

    CMeal ToteOma("tote Oma");
    ToteOma.addIngredient(Ingredients::EIngredients::eBlutwurst);
    ToteOma.addIngredient(Ingredients::EIngredients::eSauerkraut);
    ToteOma.addIngredient(Ingredients::EIngredients::eKartoffeln);
    ToteOma.addIngredient(Ingredients::EIngredients::eErbsen);

    ToteOma.output();

    CPerson anne;

    anne.setName("Anne");
    anne.setAge(16);
    anne.setProfession("Schuelerin");
    anne.setfavouriteMeal(&PizzaAnanas);

    CPerson carlos("Carlos", 25, "Brain", &WrapMitLasagne);
    CPerson fabian("Fabian", 28, "Auszubildender", &Pizza);
    CPerson david("David", 27, "Auszubildender", &NudelnMitTomatensauce);
    CPerson hannes("Hannes", 45, "Ausbildungspapa", &ToteOma);

    CPerson azubihorde[4] = {anne, carlos, fabian, david};

    for (auto const& p : azubihorde)
    {
        p.output();
    }
    hannes.output();

    return 0;
}
