#include<bits/stdc++.h>
using namespace std;
void combiSum(vector<int> v, int arr[], int n, int target, int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0){
        return;
    }
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combiSum(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    int target=8;
    combiSum(ans,arr,n,target,0);
    return 0;
}