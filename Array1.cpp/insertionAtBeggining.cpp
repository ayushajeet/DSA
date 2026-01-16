// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={22,12,34,32,46};
//     int newElement;
//     cout<<"Enter new element: ";
//     cin>>newElement;
//     for(int i=6;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=newElement;
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newElement;
    cout<<"Enter newElement: ";
    cin>>newElement;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=newElement;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}