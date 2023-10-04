#include <iostream>
#include <string>

#include "person.h"

using namespace std;

void output(string s)
{
    cout << s << endl << flush;
}

void output(person const& p)
{
    cout << "eine Person:" << endl;
    cout << "Name: " << p.name << " (" << p.alter << ")" << endl;
    cout << p.berufung << endl;
    cout << "========" << endl;
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

    person anne;

    anne.name = "Anne";
    anne.alter = 15;
    anne.berufung = "Schülerin";

    person carlos;

    carlos.name = "Carlos";
    carlos.alter = 25;
    carlos.berufung = "Brain";

    person fabian{"Fabian", 28, "Auszubildender"};

    person david{"David", 27, "Auszubildender"};

    person hannes{"Hannes", 45, "Ausbildungspapa"};

    person azubihorde[4] = {anne, carlos, fabian, david};

    for (auto const& p : azubihorde)
    {
        output(p);
    }

    return 0;
}
