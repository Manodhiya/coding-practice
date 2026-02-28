#include <iostream>
using namespace std;

int main() {
   string student_name;
   int age;
   string department;

   cout<<"enter name:";
   getline(cin,student_name);

   cout<<"enter age:";
   cin>>age;
   cin.ignore();

   cout<<"enter your department:";
   getline(cin,department);

   cout<<"--------STUDENT PROFILE-----------"<<endl;
   cout<<"Name:"<<student_name<<endl;
   cout<<"age:"<<age<<endl;
   cout<<"department:"<<department<<endl;


    return 0;
}