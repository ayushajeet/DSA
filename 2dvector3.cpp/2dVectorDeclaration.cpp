// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> v(3, vector<int> (4));
//     int a = v.size();
//     cout<<a<<" "<<endl;
//     for(int i=0;i<a;i++){
//         for(int j=0;j<v[0].size();j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v(3, vector<int> (4,2));
    int a = v.size();
    cout<<a<<" "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}