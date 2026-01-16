#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int marks[n];
    // int marks;
    // cout<<"Enter the marks: ";
    // cin>>marks;
    for(int i=1;i<=n;i++){
        cin>>marks[i]; 
    }
    for(int i=1;i<=n;i++){
       if(marks[i]<35){
        cout<<i<<" ";
       } 
    }
    cout<<endl;
    return 0;
}