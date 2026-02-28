#include <iostream>
using namespace std;

int main()
{
    float litres, pricePerLitre, totalCost;

    cout << "Enter number of litres: ";
    cin >> litres;

    cout << "Enter price per litre: ";
    cin >> pricePerLitre;

    totalCost = litres * pricePerLitre;

    cout << "Total fuel cost = " << totalCost;

    return 0;
}