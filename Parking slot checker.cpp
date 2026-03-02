#include <iostream>
using namespace std;

int main() {
    int slot_number;
    cout<<"enter the slot number:";
    cin>>slot_number;
    if(slot_number%2==0)
    {
        cout<<"car parking slot";

    }
    else{
        cout<<"bike parking slot";
    }
 

    return 0;
}