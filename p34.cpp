#include<iostream>
using namespace std;

void multiply();
void division();

void multiply(){
int num1, num2;

cout<<"Enter num1\n";
cin>>num1;
cout<<"Enter num2\n";
cin>>num2;
cout<<"num1 * num2 = "<<num1*num2<<endl;
}

void division(){
int num1,num2;

cout<<"Enter num1\n";
cin>>num1;
cout<<"Enter num2\n";
cin>>num2;
cout<<"num1/num2 = "<<num1/num2<<endl;
}



int main(){

char result;

cout<<"Choose '*' or '/' "<<endl;
cin>>result;

if (result=='*'){
    multiply();
}

else if(result=='/'){
    division();
}

return 0;
}
