#include<iostream>
using namespace std;
int myPow(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    int leftAns=myPow(a,b/2);
    if(b%2==0){
        return leftAns*leftAns;
    }
    else{
        return leftAns*leftAns*a;
    }
}
int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    int b;
    cout<<"Enter power: ";
    cin>>b;
    cout<<myPow(a,b);
    return 0;
}