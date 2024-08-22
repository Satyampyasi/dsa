#include<iostream>
using namespace std;
int main(){
    int r,c;
   cout<<"enter a row ";
   cin>>r;
   cout<<"enter a colum";
   cin>>c;
  for(int i=1;i<=r;i++){
      for(int i=1;i<=c;i++) {
           cout<<"*";
      }
      cout<<endl;
  }

}