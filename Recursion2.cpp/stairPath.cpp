#include<iostream>
using namespace std;
int stair(int n){
    if(n<=2) return n;
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<stair(n);
    return 0;
}