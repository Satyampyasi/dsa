#include<iostream>
using namespace std;
int  main(){
    int a,b;
    cout<<"enter tha base:";
    cin>>a;
    cout<<"Enter tha exponent:";
    cin>>b;
    bool flag = true;
    if(b<0){
        bool flag =false;
        b =-b;
    }
    int power=1;
    for(int i =1;i<=b;i++;){
        power=power*a;
    }

  cout<<power;
}
