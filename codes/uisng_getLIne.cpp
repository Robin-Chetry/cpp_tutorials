#include <iostream>
#include <string>
using namespace std;
int main(){
string name;
int age;
cout<<"enter your name:";
cin>>name;



cout <<"enter the age:";
cin>>age;


cout<<"my name is "<<name<<" and my age is "<<age;



  return 0;
}

// The problem arises because cin >> name; reads only the first word "Robin" into the name variable. It stops reading at the space between "Robin" and "Rawat", leaving "Rawat" in the input buffer. When you then try to read the age using cin >> age;, it reads "Rawat" as the input for age, which fails to convert to an integer, leaving age uninitialized (hence, it prints as 0).