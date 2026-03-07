#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password;
    string correctUser = "admin";
    string correctPass = "1234";

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if(username == correctUser && password == correctPass)
        {
            cout << "Login Successful\n";
            break;
        }
        else
        {
            cout << "Invalid login\n";
        }

        if(i == 3)
        {
            cout << "Account Locked\n";
        }
    }

    return 0;
}