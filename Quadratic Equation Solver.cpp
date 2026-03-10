#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,D,x1,x2;

    cout<<"Enter a b c: ";
    cin>>a>>b>>c;

    D = b*b - 4*a*c;

    if(D > 0)
    {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        cout<<"Roots are real and distinct\n";
        cout<<"Root1 = "<<x1<<"\nRoot2 = "<<x2;
    }
    else if(D == 0)
    {
        x1 = -b/(2*a);
        cout<<"Roots are real and equal\n";
        cout<<"Root = "<<x1;
    }
    else
    {
        cout<<"Roots are imaginary";
    }

    return 0;
}