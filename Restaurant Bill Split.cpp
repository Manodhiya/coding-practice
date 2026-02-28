#include <iostream>
using namespace std;

int main() {
 int total_bill;
 int total_friends,amount_per_person;
 
 cout<<"total bill:";
 cin>>total_bill;
 cout<<"total count of friends:";
 cin>>total_friends;
 if(total_friends<=0)
{
    cout<<"invalid input";
    return 0;
}
else{
    amount_per_person=total_bill/total_friends;
    cout<<"amount per person:"<<amount_per_person;

}

    return 0;
}