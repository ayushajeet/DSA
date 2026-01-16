#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void rotatePart(int i,int j, vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;;
        j--;
    }
}
int main(){
    
    vector<int> a;
    a.push_back(12);
    a.push_back(32);
    a.push_back(28);
    a.push_back(56);
    a.push_back(88);
    a.push_back(50);
    display(a);
    int n = a.size();
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    if(k>=n){
        k%=n;
    }
    

    rotatePart(0,n-k-1,a);
    rotatePart(n-k,n-1,a);
    rotatePart(0,n-1,a);
    display(a);
    return 0;
}