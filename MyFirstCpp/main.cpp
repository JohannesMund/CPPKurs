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
    bool dieWeltIstSchlecht = true;


    if( dieWeltIstSchlecht )
    {
        cout << "ich muss weinen" << endl;
    }



    string hallo = "Hallo";

    string in = input();
    string hello = "hallo" ;

    output(hello);
    output(in);


    return 0;
}
