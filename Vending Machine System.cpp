#include <iostream>
using namespace std;

int main()
{
    int choice;
    float money;

    cout << "Insert money: ";
    cin >> money;

    cout << "\n--- Vending Machine ---\n";
    cout << "1. Coffee  - Rs.50\n";
    cout << "2. Tea     - Rs.30\n";
    cout << "3. Juice   - Rs.70\n";
    cout << "4. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        if(money >= 50)
        {
            cout << "Coffee dispensed\n";
            cout << "Balance = " << money - 50;
        }
        else
            cout << "Not enough money";
    }
    else if(choice == 2)
    {
        if(money >= 30)
        {
            cout << "Tea dispensed\n";
            cout << "Balance = " << money - 30;
        }
        else
            cout << "Not enough money";
    }
    else if(choice == 3)
    {
        if(money >= 70)
        {
            cout << "Juice dispensed\n";
            cout << "Balance = " << money - 70;
        }
        else
            cout << "Not enough money";
    }
    else if(choice == 4)
    {
        cout << "Thank you!";
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}