#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n, int idx){
    if(idx==n){
        return -1;
    }
    return max(arr[idx],largest(arr,n,idx+1));
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
    cout<<largest(arr,n,0);
    return 0;
}