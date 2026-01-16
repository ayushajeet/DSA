// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int count=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count==2){
//         cout<<"number is not composite";
//     }else{
//         cout<<"number is composite";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"number  is composite";
            break;
        }else{
            cout<<"number is not composite";
            break;
        }
    }
    return 0;
}