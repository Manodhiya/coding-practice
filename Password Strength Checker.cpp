#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;

    cout << "Enter password: ";
    cin >> password;

    for(int i = 0; i < password.length(); i++)
    {
        if(password[i] >= 'A' && password[i] <= 'Z')
            hasUppercase = true;

        else if(password[i] >= 'a' && password[i] <= 'z')
            hasLowercase = true;

        else if(password[i] >= '0' && password[i] <= '9')
            hasDigit = true;
    }

    if(password.length() >= 8 && hasUppercase && hasLowercase && hasDigit)
        cout << "Strong Password";
    else
        cout << "Weak Password";

    return 0;
}