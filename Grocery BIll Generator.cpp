#include <iostream>
using namespace std;

int main() {
    float price;
    int quantity;
    float Total_bill;
  

    cout<<"enter the price :";
    cin>>price;
    cout<<"enter quantity:";
    cin>>quantity;
    
    Total_bill=price*quantity;
    cout<<"Total bill:"<<Total_bill;


    return 0;
}