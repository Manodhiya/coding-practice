#include <iostream>
using namespace std;

int main()
{
    float m1, m2, m3, total, average;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    average = total / 3;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;

    if(average >= 90)
        cout << "Grade A";
    else if(average >= 75)
        cout << "Grade B";
    else if(average >= 50)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}