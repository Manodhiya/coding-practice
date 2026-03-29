#include <iostream>
using namespace std;

int main()
{
    float basicSalary;
    float rentMoney;          
    float dailyExpenseMoney;  
    float totalSalary;        
    float taxAmount;
    float netSalary;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    rentMoney = basicSalary * 0.20;
    dailyExpenseMoney = basicSalary * 0.10;

    totalSalary = basicSalary + rentMoney + dailyExpenseMoney;

    if(totalSalary >= 20000)
        taxAmount = totalSalary * 0.10;
    else
        taxAmount = totalSalary * 0.05;

    netSalary = totalSalary - taxAmount;

    cout << "Rent Money = " << rentMoney << endl;
    cout << "Daily Expense Money = " << dailyExpenseMoney << endl;
    cout << "Total Salary = " << totalSalary << endl;
    cout << "Tax = " << taxAmount << endl;
    cout << "Net Salary = " << netSalary << endl;

    return 0;
}