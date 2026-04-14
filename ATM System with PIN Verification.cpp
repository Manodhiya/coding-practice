#include <iostream>
using namespace std;

int main()
{
    int correctPIN = 1234;
    int enteredPIN;
    float balance = 5000, amount;

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter PIN: ";
        cin >> enteredPIN;

        if(enteredPIN == correctPIN)
        {
            cout << "Login Successful\n";

            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal successful\n";
                cout << "Remaining Balance = " << balance;
            }
            else
            {
                cout << "Insufficient balance";
            }

            return 0;
        }
        else
        {
            cout << "Wrong PIN\n";
        }
    }

    cout << "Card Blocked";

    return 0;
}