#include <iostream>
#include <string>

#include "cgericht.h"
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

    CPerson anne;

    anne.setName("Anne");
    anne.setAge(15);
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
