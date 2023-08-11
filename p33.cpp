#include<iostream>
using namespace std;

void checklower(char alpha);


void checklower(char alpha){

if (alpha>=97 && alpha<=122){

    alpha=alpha-32;
    cout<<alpha<<endl;
}
else if (alpha>=32 && alpha<=97){
    alpha=alpha+32;
    cout<<alpha<<endl;
}
}


int main(){


char alpha;                                                 
cout<<"Enter one alpha\n";
cin>>alpha;

checklower (alpha);


return 0;
}







    