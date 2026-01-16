#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter number: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            flag=true;
        }
        
    }
    if(flag==true){
        cout<<"Element is found";
    }else{
        cout<<"Element is not found";
    }
    return 0;
}