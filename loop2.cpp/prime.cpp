// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"number is not prime";
//             break;
//         }else{
//             cout<<"number is prime";
//             break;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void isPrime(int n){
//     if(n==1){
//         cout<<"number is not prime";
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"number is not prime";
//             break;
//         }else{
//             cout<<"number is prime";
//             break;
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     isPrime(n);
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    bool flag = true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1){
        cout<<"number is neither prime nor composite";
        
    }
    else if(flag==true){
        cout<<"number is prime";
    }else{
        cout<<"number is composite";
    }
    return 0;
}