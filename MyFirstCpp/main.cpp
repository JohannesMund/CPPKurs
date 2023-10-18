#include <iostream>
#include <string>

#include "cgericht.h"
#include "person.h"

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

    CGericht pizza("Pizza");
    pizza.addZutat(CGericht::EZutaten::eMehl);
    pizza.addZutat(CGericht::EZutaten::eWasser);
    pizza.addZutat(CGericht::EZutaten::eSalz);
    pizza.addZutat(CGericht::EZutaten::eTomaten);
    pizza.addZutat(CGericht::EZutaten::eSalami);
    pizza.addZutat(CGericht::EZutaten::eKaese);

    pizza.output();

    person anne;

    anne.setName("Anne");
    anne.setAge(15);
    anne.setProfession("Schülerin");

    person carlos("Carlos", 25, "Brain");
    person fabian("Fabian", 28, "Auszubildender");
    person david("David", 27, "Auszubildender");
    person hannes("Hannes", 45, "Ausbildungspapa");

    person azubihorde[4] = {anne, carlos, fabian, david};

    for (auto const& p : azubihorde)
    {
        p.output();
    }

    return 0;
}
