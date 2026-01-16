#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    int* ptr = arr;
    // int* ptr = &arr[0];
    cout<<ptr<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    ptr[0]=8;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
