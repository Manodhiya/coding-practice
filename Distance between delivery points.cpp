#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2, distance;

    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance between the two delivery points = " << distance << endl;

    return 0;
}