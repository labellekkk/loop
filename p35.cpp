#include<iostream>
using namespace std;

void multiply(int num1, int num2);
void division(int num1 , int num2);


void multiply(int num1,int num2){
    cout<<"num1*num2 = "<<num1*num2<<endl;

}
void division(int num1 ,int num2){
   cout<<"num1/num2 = "<<num1/num2<<endl; 
}



int main(){



int num1,num2;


cout<<"Enter num1 \n";
cin>>num1;
cout<<"Enter num2 \n";
cin>>num2;

multiply( num1, num2);
division( num1, num2);


    return 0;
}