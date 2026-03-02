#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email;
    bool hasAt = false;
    bool hasDot = false;
    bool hasSpace = false;

    cout << "Enter email: ";
    cin >> email;   // using cin instead of getline to avoid buffer issue

    for(int i = 0; i < email.length(); i++)
    {
        if(email[i] == '@')
            hasAt = true;

        if(email[i] == '.')
            hasDot = true;

        if(email[i] == ' ')
            hasSpace = true;
    }

    if(hasAt && hasDot && !hasSpace && email[0] != '@')
        cout << "Valid Email";
    else
        cout << "Invalid Email";

    return 0;
}