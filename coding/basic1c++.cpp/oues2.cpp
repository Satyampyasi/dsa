#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<" Enter the number";
    cin>>x;
    int y = (int)x;
    float z = (float)y;
    x = x-z;
    cout<<x;
}