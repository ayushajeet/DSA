// #include<iostream>
// using namespace std;
// int pow(int a, int b){
//     if(b==0) return 1;
//     return a * pow(a,b-1);
// }
// int main(){
//     int a;
//     cout<<"Enter base: ";
//     cin>>a;
//     int b;
//     cout<<"Enter power: ";
//     cin>>b;
//     cout<<pow(a,b);
//     return 0;
// }

#include<iostream>
using namespace std;
int fib(int n){
    if(n==1 || n==2){
        return 1;
    }
    int a=1;
    int b=1;
    int sum=0;
    for(int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}