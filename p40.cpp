#include<iostream>
using namespace std;


int main(){

int a[5];      //declare array

for(int i=0 ; i<5; i++){
    cout<<"Enter number\n";
    cin>>a[i];
}

for(int i=0; i<5; i++){
    cout<<"Output result  "<<a[i]<<endl;
}

return 0;

}