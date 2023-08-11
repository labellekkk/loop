#include<iostream>
using namespace std;

int perimeter(int length,int width);

int area(int length, int width);

int perimeter(int length,int width){

     return 2*(length + width);
}

int area(int length, int width){
    
    return length*width;
}



int main(){

int length;
int width;
cout<<"Enter the length of the rectangle\n";
cin>>length;
cout<<"Enter the width of the rectangle\n";
cin>>width;

char result;
cout<<"Choose perimeter = p or area = a \n";
cin>>result;

if(result=='p'){
    cout<<"Perimeter of the rectangle= "<<perimeter(length, width);
    cout<<endl;
}
else if (result=='a'){
    cout<<"Area of the rectangle= "<< area(length, width);
    cout<<endl;
}
return 0;
}