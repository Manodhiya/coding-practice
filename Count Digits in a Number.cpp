#include <iostream>
using namespace std;

int main()
{
    int number, digitCount = 0;
    cout<<"enter the number:";
    cin >> number;

    while(number != 0)
    {
        number = number / 10;
        digitCount++;
    }

    cout << "digit count"<<digitCount;

    return 0;
}