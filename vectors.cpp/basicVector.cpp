#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;   //we don't need to mention the size
    // inserting // input donot use[]
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // if we want to access or update then we can use the []
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

    v[0]=18;
    cout<<v[0];
    return 0;
}