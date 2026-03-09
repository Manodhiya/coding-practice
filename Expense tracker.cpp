#include <iostream>
using namespace std;

int main()
{
    float expense;
    float total = 0;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter expense " << i << ": ";
        cin >> expense;

        if(expense < 0)
        {
            cout << "Invalid expense. Skipping...\n";
            continue;
        }

        total += expense;
    }

    cout << "Total expenses = " << total << endl;

    return 0;
}