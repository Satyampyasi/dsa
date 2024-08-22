#include<iostream>6
using namespace std;
int main(){
    int n;
    cout<<"enter tha value of n:";
    cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
        sum= sum-i;}
        if(i%2!=0){
        sum=sum+i;
        }

    }
    cout<<sum;
}