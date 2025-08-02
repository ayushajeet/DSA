// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     if(n%5==0 || n%3==0){
//         if(n%15!=0){
//             cout<<"number is divisible by 5 or 3 but not by 15";
//         }else{
//             cout<<"not matching condition";
//         }
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter 1st number: ";
//     cin>>a;
//     int b;
//     cout<<"Enter 2nd number: ";
//     cin>>b;
//     int c;
//     cout<<"Enter 3rd number: ";
//     cin>>c;
//     if(a==b){
//         if(b==c){
//             cout<<"all are same";
//         }
//     }
//     if(a>b){
//         if(a>c){
//             cout<<"a is greatest";
//         }
//     }else if(b>c){
//         if(b>a){
//             cout<<"b is greatest";
//         }
//     }else{
//         cout<<"c is greatest";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter 1st number: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number: ";
    cin>>b;
    int c;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if(a==b){
        if(b==c){
            cout<<"all are same";
        }
    }
    else if(a>b){
        if(a>c){
            cout<<"a is greatest";
        }else{
            cout<<"c is greatest";
        }
    }else{
         if(b>c){
            cout<<"b is greatest";
         }else{
            cout<<"c is greatest";
         }
    }
    return 0;
}
