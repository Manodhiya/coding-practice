#include <iostream>
using namespace std;

int main() {

    string Password;
    
    cout<<"enter the password:";
    getline(cin,Password);

    if(Password.length()>=8)
    cout<<"password accepted";
    else
    cout<<"Too short";

    return 0;
}