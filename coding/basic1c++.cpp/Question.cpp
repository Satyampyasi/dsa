#include<iostream>
using namespace std;
int main(){
    int cp,sp;
   cout<<"Enter tha value of cp=";
   cin>>cp;
   cout<<"Enter tha value of sp=";
   cin>>sp;
   if(sp>cp){
    cout<<"profit of="  <<sp-cp<<endl;
   }
   else if(cp>sp){
    cout<<"Loss of ="  <<cp-sp<<endl;
   }
   else{
    cout<<"no profit no loss";
   }
}