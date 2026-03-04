#include <iostream>
using namespace std;

int main() {
    int units;
    int Total_bill;

    cout<<"Enter the number of units consumed:";
    cin>>units;

    if(units<=100){
        Total_bill=units*3;
        cout<<"Total electricity bill is:"<<Total_bill;
    }
    else if(100<units && units<=200){
        Total_bill=units*5;
        cout<<"Total electricity bill is:"<<Total_bill;
    }
    else if(200<units){
        Total_bill=units*8;
        cout<<"Total electricity bill is:"<<Total_bill;
    }
    else if(units<0){
        cout<<"inavlid input";
    }
    return 0;
}