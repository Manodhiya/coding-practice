#include <iostream>
using namespace std;

int main()
{
    float salary;

    cout << "Enter your salary: ";
    cin >> salary;

    if(salary >= 50000)
    {
        cout << "Loan Approved";
    }
    else if(salary >= 30000)
    {
        cout << "Loan Approved with Limited Amount";
    }
    else
    {
        cout << "Loan Rejected";
    }

    return 0;
}