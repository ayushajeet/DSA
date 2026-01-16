#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(22);
    v.push_back(29);
    v.push_back(19);
    v.push_back(6);
    v.push_back(22);
    int x=22;
    int index=0;
            // traversing from starting

    // for(int i=0;i<v.size();i++){
    //     if(x==v[i]) index=i;
    // }
    // cout<<index;
            // traversing from ending

    for(int i=v.size()-1;i>=0;i--){
        index = i;
        break;
    }
    cout<<index;
    return 0;
}