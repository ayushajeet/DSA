// Merge sort algo:- divide the array in 2 equal parts and then merging them
// time complexity is: o(n.logn)
//space complexity is: o(n)
// it is stable

#include<bits/stdc++.h>
using namespace std;
int c=0;
void merge(vector<int>&a, vector<int>&b, vector<int>&ans){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) ans[k++]=a[i++];
        else ans[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()) ans[k++]=b[j++];
    }
    else{
        while(i<a.size()) ans[k++]=a[i++];
    }
    
}

int countInversion(vector<int> a, vector<int> b){
    int i=0;
    int j=0;
    int count=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}

void mergeSort(vector<int> &v){
    int n=v.size();

    if(n<=1) return;
    
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    c+=countInversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    cout<<c;
    return 0;
}


//hw:- implement merge sort algo to sort the array in decresing order