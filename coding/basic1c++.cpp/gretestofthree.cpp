#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st no "<<"enter 2nd no"<<"enter 3rd no";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<"is largest";
    }
    if(b>a && b>c){
        cout<<b<<"is largest";
    }
    if(c>b && c>a){
        cout<<c<<"is largest";
    }
    }