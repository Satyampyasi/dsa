#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter tha value of number ";
    cin>>y;
    if(y>99 && y<1000){
        cout<<"This is a three digit number";
    }
    else{
        cout<<" Not a three digit number";
    }
}