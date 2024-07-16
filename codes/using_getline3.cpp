#include <iostream>
#include <string>
using namespace std;
int main(){
string name;
int age;


cout <<"enter the age:";
cin>>age;


cout<<"enter your name:";
getline(cin >> std::ws,name); 





cout<<"my name is "<<name<<" and my age is "<<age;



  return 0;
}