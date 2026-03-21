#include <iostream>
using namespace std;

int main()
{
    int current, destination;

    cout << "Enter current floor (1-10): ";
    cin >> current;

    cout << "Enter destination floor (1-10): ";
    cin >> destination;

    if(current == destination)
    {
        cout << "You are already on that floor.";
    }
    else if(destination > current)
    {
        cout << "Going Up...\n";

        for(int i = current + 1; i <= destination; i++)
        {
            cout << "Floor " << i << endl;
        }
    }
    else
    {
        cout << "Going Down...\n";

        for(int i = current - 1; i >= destination; i--)
        {
            cout << "Floor " << i << endl;
        }
    }

    cout << "Reached destination!";

    return 0;
}