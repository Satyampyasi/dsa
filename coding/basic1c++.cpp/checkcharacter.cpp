#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<" Enter tha character :";
    cin>>x;
    int y = (int)x;
    
    if(y>48 && y<58){
        cout<<"this is a number";
    }
    else if(y>64 && y<123){
      cout<<"This is a alphabet";
    }
    else{
        cout<<"invalid";
    }
    }