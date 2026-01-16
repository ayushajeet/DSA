// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int newElement;
//     cout<<"Enter newElement: ";
//     cin>>newElement;
//     int index;
//     cout<<"Enter index: ";
//     cin>>index;
//     for(int i=n;i>index;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[index]=newElement;
//     n++;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newelement;
    cout<<"Enter newelement: ";
    cin>>newelement;
    
    int pos;
    cout<<"Enter pos: ";
    cin>>pos;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=newelement;
    // n++;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}