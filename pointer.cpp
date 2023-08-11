#include<iostream>
using namespace std;
int main(){

    //initilize variables
    char c='A';
    int i=123;
    float f=567.25;

    // define pointer types and initilize with address
    char* cp = &c;
    int* ci = &i ;
    float* fp = &f;


 // print variables values using pointers
cout<<"c = "<<*cp<<endl;
cout<<"i = "<<*ci<<endl;
cout<<"f = "<<*fp<<endl;
return 0;


}