#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter tha value of x"   ;//* check divisibility by 3and 5 but not 15
    cin >>x;
    if(x%3==0 || x%5==0){
        if(x%15!=0){
            cout<<"tha no is divisible by 3or 5 but not 15";
        }
        else{
            cout<<"not matching condition ";
        }
    }

else{
    cout<<"not matching condition ";
}
}
