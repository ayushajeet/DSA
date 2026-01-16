#include<iostream>
#include<vector>
using namespace std;
void vector2d(vector<vector<int>> &v){      //in vector we dont need to mention the size of row and column
    v[0][0]=18;
}
void len(vector< vector<int>> &v){
    cout<<v.size();
}
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

    cout<<vnew[0][0]<<endl;
    vector2d(vnew);
    cout<<vnew[0][0]<<endl;
    len(vnew);
    
    return 0;
}