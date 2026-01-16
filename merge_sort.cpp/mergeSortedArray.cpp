#include<bits/stdc++.h>
using namespace std;
void mergeSort(vector<int> &a, vector<int> &b, vector<int> &ans){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) ans[k++]=a[i++];
        else ans[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()) ans[k++]=b[j++];
    }
    else{
        while (i<a.size()) ans[k++]=a[i++];
        
        
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int a[]={1,4,6,8,11,14,23};
    int b[]={2,3,5,7,9,10,13};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    vector<int> v1(a,a+n1);
    vector<int> v2(b,b+n2);
    vector<int> ans(n1+n2);
    mergeSort(v1,v2,ans);
    return 0;
}



