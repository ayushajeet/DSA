#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int count=0;
    int a=n;
    while(a!=0){
        a/=10;
        count++;
    }
    if(count==0) cout<<1;
    else cout<<count;
    return 0;
}