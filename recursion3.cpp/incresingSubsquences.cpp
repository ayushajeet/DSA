#include<bits/stdc++.h>
using namespace std;
void printsubsetArray(int arr[], int n, int idx, vector<int> v,int k){
    if(idx==n){
        if(v.size()==3){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        
        }
        return;
    }
    printsubsetArray(arr, n, idx+1,  v,k);
    v.push_back(arr[idx]);
    printsubsetArray(arr, n, idx+1,  v,k);

}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k=3;
    printsubsetArray(arr,n,0,v,3);
    return 0;
}