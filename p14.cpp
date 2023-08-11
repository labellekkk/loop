#include<iostream>
using namespace std;
int main(){
 string color;
 cout<<"Enter choose color blue or red \n";
 cin>>color;
 if(color=="blue"){
    cout<<"This color is blue"<<endl;
 }
 else if(color=="red"){
    cout<<"This number is red"<<endl;
 }
 else{
    cout<<"No stock";
 }
    return 0;
}
