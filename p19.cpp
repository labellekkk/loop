#include<iostream>
using namespace std;
int main(){
int num1=10;
int num2 =20;
char opt; //*"+ or - or *"*//

cout<<"Enter operator + or - or * \n";
cin>>opt;

switch(opt){

case '+' :

cout<<num1+num2<<endl;
break;

case '-' :

cout<<num1-num2<<endl;
break;

case '*':
cout<<num1*num2<<endl;
break;
default:

cout<<"Wrong operator\n";
}

return 0;
}