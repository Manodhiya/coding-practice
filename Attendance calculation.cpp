#include <iostream>
using namespace std;

int main() {

    int totalStudents;
    int present = 0, absent = 0;
    char status;

    cout << "Enter total number of students: ";
    cin >> totalStudents;

    for(int i = 1; i <= totalStudents; i++) {

        cout << "Enter attendance for student " << i << " (P/A): ";
        cin >> status;

        if(status == 'P' || status == 'p') {
            present++;
        }
        else if(status == 'A' || status == 'a') {
            absent++;
        }
        else {
            cout << "Invalid input. Enter P or A only.\n";
            i--;  
        }
    }

    cout << "\nTotal Present Students: " << present << endl;
    cout << "Total Absent Students: " << absent << endl;

    return 0;
}