#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b;
    cout<<"Enter the value of b: ";
    cin>>b;
    bool flag = true;
    if(b<0){
        flag=false;
        b=-b;
    }
    float power=1;
    for(int i=0;i<b;i++){
        power*=a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    if(a==0 && b==0) cout<<"not defined";
    cout<<a<<" raised to power "<<b<<" is "<<power;
    return 0;
}