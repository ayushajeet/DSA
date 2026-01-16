#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a, vector<int> &b ,vector<int> &res){
    int  i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) {
            res[k++]=a[i++];
            
        }
        else{
            res[k++]=b[j++];
            
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }else{
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter number1: ";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter number2: ";
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> v1(arr1,arr1+n);
    vector<int> v2(arr2,arr2+m);
    vector<int> ans(n+m);
    merge(v1,v2,ans);
    
    return 0;
}