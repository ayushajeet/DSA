#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cout<<"Enter target: ";
    cin>>target;
    
    vector<int> v;
    int n;
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter array element: ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;
}