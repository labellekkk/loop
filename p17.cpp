#include<iostream>
using namespace std;
int main(){
int length,width,area,perimeter;
    cout<<"Enter the length of the rectangle\n";
    cin>>length;
    cout<<"Enter the width of the rectangle\n";
    cin>>width;
    area=length*width;
    perimeter=(length+width)* 2;
    cout<<"Enter area= a or\n parimeter= p\n";
    char result;
    cin>>result;
    if (result=='a'){
            cout<<"The area of the rectangle "<<area<<endl;

    }

    else if (result=='p'){
        cout<<"The perimeter of the rectangle "<<perimeter<<endl;
    }
    
    else {
        cout<<"No calculate";
    }
    return 0;
}

