#include<iostream>
using namespace std;

void add(int num1 , int num2);                    //function declare
void sub(int num1, int num2);

void add (int num1 , int num2){                        // function defination
cout<<"num1+num2= "<<num1+num2<<endl;
}

void sub(int num1,int num2){
cout<<"num1-num2= "<<num1-num2<<endl;
}




int main(){
int num1,num2;

cout<<"Enter num1\n";
cin>>num1;
cout<<"Enter num2\n ";
cin>>num2;

add(num1,num2);
sub(num1,num2);

return 0;
}