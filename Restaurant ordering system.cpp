#include <iostream>
using namespace std;

int main()
{
    int choice;
    float total = 0;
    char continueOrder;

    do
    {
        cout << "\n------ Restaurant Menu ------\n";
        cout << "1. Burger  - 120\n";
        cout << "2. Pizza   - 250\n";
        cout << "3. Pasta   - 180\n";
        cout << "4. Juice   - 80\n";
        cout << "5. Exit\n";

        cout << "Enter item number: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Burger added\n";
                total += 120;
                break;

            case 2:
                cout << "Pizza added\n";
                total += 250;
                break;

            case 3:
                cout << "Pasta added\n";
                total += 180;
                break;

            case 4:
                cout << "Juice added\n";
                total += 80;
                break;

            case 5:
                cout << "Exiting order...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

        if(choice != 5)
        {
            cout << "Do you want to order more? (y/n): ";
            cin >> continueOrder;
        }

    } while(continueOrder == 'y' || continueOrder == 'Y');

    cout << "\nTotal Bill = " << total << endl;
    cout << "Thank you for visiting!\n";

    return 0;
}