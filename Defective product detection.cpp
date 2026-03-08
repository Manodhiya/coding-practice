#include <iostream>
using namespace std;

int main()
{
    int productStatus;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter status of product " << i << " (1 = Good, 0 = Defective): ";
        cin >> productStatus;

        if(productStatus == 0)
        {
            cout << "Defective product detected. Stopping inspection.\n";
            break;
        }

        cout << "Product is good.\n";
    }

    return 0;
}