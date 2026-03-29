#include <iostream>
using namespace std;

int main()
{
    int tickets;
    float price = 150, total, discount = 0;

    cout << "Enter number of tickets: ";
    cin >> tickets;

    total = tickets * price;

    if(tickets >= 5)
    {
        discount = total * 0.10;
    }

    total = total - discount;

    cout << "Total amount = " << total << endl;

    return 0;
}