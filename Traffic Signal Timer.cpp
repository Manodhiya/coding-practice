#include <iostream>
using namespace std;

int main()
{
    int cycles;

    cout << "Enter number of cycles: ";
    cin >> cycles;

    for(int i = 1; i <= cycles; i++)
    {
        cout << "Red Light\n";
        cout << "Yellow Light\n";
        cout << "Green Light\n\n";
    }

    return 0;
}