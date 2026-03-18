#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int number, guess;

    number = rand() % 100 + 1; // random number 1–100

    cout << "Guess the number (1 to 100):\n";

    while(true)
    {
        cin >> guess;

        if(guess > number)
        {
            cout << "Too High\n";
        }
        else if(guess < number)
        {
            cout << "Too Low\n";
        }
        else
        {
            cout << "Correct Guess!\n";
            break;
        }
    }

    return 0;
}