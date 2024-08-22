#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter tha number";
    cin>>n; 
    int c = 0;
    int a=n;
    while(n>0){
        n =n/10;
        c = c+1;
    }
    if(a==0)cout<<1;
    else cout<<c;
    
}