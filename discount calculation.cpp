#include <iostream>
using namespace std;

int main() {
    float original_price;
    float discount_percentage;
    float discount_amount;
    float final_price;
    cout<<"enter the original price:";
    cin>>original_price;
    cout<<"enter the discount percentage:";
    cin>>discount_percentage;
    discount_amount=(original_price*discount_percentage)/100;
    cout<<"discount amount is:"<<discount_amount<<endl;
    final_price=original_price-discount_amount;
    cout<<"final amount is:"<<final_price;

    return 0;
}