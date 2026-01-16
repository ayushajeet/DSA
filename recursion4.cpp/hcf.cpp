            //iterative approach
// #include<iostream>
// using namespace std;
// int hcf(int a, int b){
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
//     }
//     return 1;
// }
// int main(){
//     int a=22;
//     int b = 77;
//     cout<<hcf(a,b);
//     return 0;
// }

#include<iostream>
using namespace std;
int GCD(int a, int b){
    if(b==0){
        return a;
    }
    else return GCD(a%b,b);
}
int main(){
    int a=22;
    int b = 77;
    cout<<GCD(a,b);
    return 0;
}

//TIME COMPLEXITY OF GCD IS O(log(a+b))