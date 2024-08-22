#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row no:-";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1;k<=nst;k++){
             cout<<"*";
        }
        nst+=2;
        cout<<endl;
        for(int p=1;p<=i;p++){
            cout<<" ";
        }
        for(int l=1;l<=n+1;l++){
            cout<<"*";
    }
     n-=2;
     
}
 }