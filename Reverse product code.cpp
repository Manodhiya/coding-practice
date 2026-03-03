#include <iostream>
#include <string>
using namespace std;

int main()
{
    string productCode;

    cout << "Enter product code: ";
    cin >> productCode;

    cout << "Reversed product code: ";

    for(int i = productCode.length() - 1; i >= 0; i--)
    {
        cout << productCode[i];
    }

    return 0;
}