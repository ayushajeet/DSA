
#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,8,12,24,33,89};
    int n=6;
    int x;
    cin>>x;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if (arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(flag==false){
        cout<<arr[high];
    }
    return 0;
}