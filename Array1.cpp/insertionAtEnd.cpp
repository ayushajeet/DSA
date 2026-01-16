// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int newEle;
//     cout<<"Enter new Element: ";
//     cin>>newEle;
//     int size=0;
//     while(size<n && arr[size]!=0){
//         size++;
//     }
//     arr[size]=newEle;
//     for(int i=0;i<=size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// this is better
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
    int newEle;
    cout<<"Enter new Element: ";
    cin>>newEle;
    arr[n] =newEle;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}