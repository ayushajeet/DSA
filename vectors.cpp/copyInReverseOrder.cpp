#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    vector<int> v;
    v.push_back(22);
    v.push_back(21);
    v.push_back(66);
    v.push_back(47);
    v.push_back(52);
    display(v);
    vector<int> v2(v.size());
    for(int i=0;i<v2.size();i++){
        // int j=v2.size()-1-i;
        // v2[i]=v[j];
        v2[i]=v[v2.size()-1-i];
    }
    display(v2);
    return 0;
}