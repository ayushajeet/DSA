
#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,8,8,10,10,12,24,33,89};
    int n=9;
    int x;
    cin>>x;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){

            if(arr[mid-1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                high=mid-1;
            }
        }
        else if (arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(flag==false){
        cout<<-1;
    }
    return 0;
}