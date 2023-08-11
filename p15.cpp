#include<iostream>
using namespace std;
int main(){
 string color;
 cout<<"Enter choose color blue or red \n";
 cin>>color;
 if(color=="blue"||color=="red"){
    cout<<"This color is available"<<endl;
    
 } 
 else{
    cout<<"No stock";
 }
    return 0;
}
