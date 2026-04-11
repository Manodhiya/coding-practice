#include <iostream>
using namespace std;

int main()
{
    int choice;
    float celsius, fahrenheit;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32;
        cout << fahrenheit;
    }
    else if(choice == 2)
    {
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5/9;
        cout << celsius;
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}