#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float P, R, T, A, CI;

    cout << "Enter Principal amount: ";
    cin >> P;

    cout << "Enter Rate of interest: ";
    cin >> R;

    cout << "Enter Time (years): ";
    cin >> T;

    A = P * pow((1 + R/100), T);
    CI = A - P;

    cout << "Amount = " << A << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}