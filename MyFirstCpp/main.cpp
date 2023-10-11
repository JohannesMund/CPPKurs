#include <iostream>
#include <string>

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

    person anne;

    anne.setName("Anne");
    anne.setAge(15);
    anne.setBerufung("Schülerin");

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
