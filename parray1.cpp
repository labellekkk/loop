#include <iostream>
using namespace std;
int main(){

float a[5]={1.5, 3.45 , 2.5, 4.7, 5.2};

cout<<"Before modify"<<endl;
for (int i=0 ; i<5 ;i++){
 cout<<a[i]<<",";
}



int no;
float mv;
cout<<"\n Modify no insert 0 to 4 \n";
cin>>no;

cout<<"Modify value insert No."<<no<<"\n";
cin>>mv;

a[no]=mv;

cout<<"After modify"<<endl;
for (int i=0 ; i<5 ;i++){
 cout<<a[i]<<",";
}



}