// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
//     vector<int> vec={11,23,35,23,33};
//     vec.push_back(78);
//     sort(vec.begin(),vec.end());
//     for(int x: vec){
//         cout<<x<<" ";
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;
//     vector<int> vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     sort(vec.begin(),vec.end());
//     for(int x: vec){
//         cout<<x<<" ";
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i: vec){
        cout<<i<<" ";
    }
    return 0;
}