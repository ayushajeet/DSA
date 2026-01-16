#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> &vec){
    vec[0]=12;
}
int main(){
    vector <int> v;
    v.push_back(33);
    v.push_back(38);
    v.push_back(22);
    v.push_back(89);
    v.push_back(10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}