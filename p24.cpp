#include<iostream>
using namespace std;
int main(){

    int num=1;
    int digit;
    cout<<"Enter the number you want to multiply\n";
    cin>>digit;

    if(digit >=2 && digit  <=10){
    while (num<=10)
    {
    cout<<digit<<"*"<<num<<"="
        <<digit*num<<endl;

    num++;
    }
    }
    else{
        cout<<"Try again\n";
    }
   return 0; 
}