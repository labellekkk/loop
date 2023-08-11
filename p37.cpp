#include<iostream>
using namespace std;

string evenodd(int);

string evenodd(int digit){

if(digit%2==0){
    return "even";
}
else if (digit%2!=0){
    return "odd";
}
return 0;
}



int main(){

int digit;
string output;


cout<<"Enter number\n";
cin>>digit;

output=evenodd(digit);

cout<<output<<endl;


return 0;

}