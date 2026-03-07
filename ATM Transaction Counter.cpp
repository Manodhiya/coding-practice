#include <iostream>
using namespace std;

int main()
{
    float balance, withdraw;

    cout << "Enter initial balance: ";
    cin >> balance;

    while(balance > 0)
    {
        cout << "Enter withdrawal amount: ";
        cin >> withdraw;

        if(withdraw > balance)
        {
            cout << "Insufficient balance\n";
        }
        else
        {
            balance = balance - withdraw;
            cout << "Remaining balance: " << balance << endl;
        }
    }

    cout << "Balance is zero. Transaction stopped.";

    return 0;
}
