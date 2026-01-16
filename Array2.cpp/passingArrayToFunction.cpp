#include<iostream>
using namespace std;
void display(int arr1[], int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
void update(int arr[]){
    arr[0]=11;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n);
    update(arr);
    display(arr, n);

    return 0;
}