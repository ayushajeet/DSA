// #include<bits/stdc++.h>
// using namespace std;
// void display(int arr[],int n, int idx,int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     } 
//     if(max<arr[idx]){
//         max=arr[idx];
//     }
//     display(arr,n,idx+1, max);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     display(arr,n,0,INT_MIN);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n, int idx, int mx){
    if(idx==n){
        cout<<"maximum element is: "<<mx;
        return;
    }
    if(mx<arr[idx]){
        mx=arr[idx];
    }
    display(arr,n,idx+1,mx);

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    display(arr,n,0,INT_MIN);
    return 0;
}