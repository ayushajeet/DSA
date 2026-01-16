// #include<iostream>
// using namespace std;
// int fact(int x){
//     int pro=1;
//     for(int i=1;i<=x;i++){
//         pro*=i;
//     }
//     return pro;
// }
// int jfact(int y){
//     int pro=1;
//     for(int j=0;j<=y;j++){
//         pro*=j;
//     }
//     return pro;
// }
// int ijfact(int a, int b){
//     int prod=1;
//     for(int k=1;k<=a-b;k++){
//         prod*=k;
//     }
//     return prod;
// }
// int combination(int i,int j){
//     int icj = ifact(i)/(jfact(j) * ijfact(i,j));
//     return icj;
// }
// int fact(int n){
//     int pro=1;
//     for(int i=1;i<=n;i++){
//         pro*=i;
//     }
//     return pro;
// }
// int combination(int a, int b){
//     int ncr = fact(a)/(fact(b)*fact(a-b));
// }
// int main(){
//     int r;
//     cout<<"enter the value of row: ";
//     cin>>r;
//     for(int i=0;i<=r;i++){
//         for(int j=0;j<=i;j++){
//             cout<<combination(i,j)<<" ";
//         }
//         cout<<endl;
//     }
    

//     return 0;
// }



#include<iostream>
using namespace std;
int fact(int n){
    int pro=1;
    for(int i=1;i<=n;i++){
        pro*=i;
    }
    return pro;
}
int combination(int a, int b){
    int ncr=fact(a)/(fact(b)*fact(a-b));
    return ncr;
}
int main(){
    int n;
    cout<<"Enter the number of row: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}