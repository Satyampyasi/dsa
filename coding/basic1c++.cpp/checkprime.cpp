#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter tha nuomber";
    cin>>n;
    for(int i=2; i<= n-1;i++)
    if(n%i==0){
        cout<<"THIS is not prime no";
        break;
    }
    else{
        cout<<"Thia is a prime ";
        break;
    }
}