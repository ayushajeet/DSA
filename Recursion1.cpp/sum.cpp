        //parametrised
// #include<iostream>
// using namespace std;
// void ans(int sum, int n){
//     if(n==0) {
//         cout<<sum;
//         return;
//     }
//     ans(sum+n,n-1);
// }
// int main(){
//     int i;
//     cout<<"Enter ini number: ";
//     cin>>i;
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     ans(i,n);
//     return 0;
// }


        //return type
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sum(n);
    return 0;
}