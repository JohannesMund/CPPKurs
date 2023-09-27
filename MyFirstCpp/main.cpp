#include <iostream>
#include <string>

using namespace std;

//Notiz an Zukunfts-Ich: verstehen was hier passiert
void output(string s)
{

    cout << s << endl;
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
    int i = 1;
    unsigned int;

    char c = 'c';
    unsigned char;

    bool b = true;

    float f = 1.1;
    double d = 2.2;

    int ii = f;


    string hallo = "Hallo";

    string in = input();
    string hello = "hallo" ;

    output(hello);
    output(in);


    return 0;
}
