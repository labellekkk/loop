#include<iostream>
using namespace std;

void add();                    //function declare
void sub();

void add (){                        // function defination
int num1 ,num2;
cout<<"Enter num1\n";
cin>>num1;
cout<<"Enter num2\n ";
cin>>num2;
cout<<"num1+num2 = "<<num1+num2<<endl;
}


void sub (){                        // function defination
int num1 ,num2;
cout<<"Enter num1\n";
cin>>num1;
cout<<"Enter num2\n ";
cin>>num2;
cout<<"num1-num2 = "<<num1-num2;
}
int main(){

char result;
cout<<"Choose '+' or '-'";
cin>>result;

if (result=='+'){
    add();

}
else if (result=='-')
{
    sub();
}

else{

    add();
    sub();
}







return 0;
}