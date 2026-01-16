#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    vector<int> v3;
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    vector< vector<int>> vnew;
    vnew.push_back(v1);
    vnew.push_back(v2);
    vnew.push_back(v3);

    cout<<vnew[1][1];


    return 0;
}