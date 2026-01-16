#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int a;
    cout<<"Enter a: ";
    cin>>a;
    vec.push_back(a);
    // n++;
    for(int i:vec){
        cout<<i<<" ";
    }
    return 0;
}