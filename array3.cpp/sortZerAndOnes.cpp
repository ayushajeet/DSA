// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // void sort01(vector<int>& v){
// //     int n = v.size();
// //     int noz=0;
// //     int noo=0;
// //     for(int i=0;i<n;i++){
// //         if(v[i]==0) noz++;
// //         else noo++;
// //     }
// //     for(int i=0;i<n;i++){
// //         if(i<noo) v[i]=0;
// //         else v[i]=1;
// //     }
// // }
// // int main(){
// //     int Size;
// //     cout<<"Enter size: ";
// //     cin>>Size;
// //     vector<int> a(Size);
// //     for(int i=0;i<Size;i++){
// //         int x;
// //         cin>>x;
// //         a.push_back(x);
// //         // cin>>a[i];
// //     } 
// //     sort01(a);
// //     for(int i=0;i<Size;i++){
// //         cout<<a[i]<<" ";
// //     } 
// //     return 0;
// // }



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void sortzo(vector<int> &a){
//     int noz=0;
//     int noo=0;
//     int n = a.size();
//     for(int i=0;i<n;i++){
//         if(a[i]==0) noz++;
//         else noo++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<noz) a[i]=0;
//         else a[i]=1;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter size: ";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     sortzo(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int>& v){
//     int n = v.size();
//     int noz=0;
//     int noo=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) noz++;
//         else noo++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<noo) v[i]=0;
//         else v[i]=1;
//     }
// }
// int main(){
//     int Size;
//     cout<<"Enter size: ";
//     cin>>Size;
//     vector<int> a(Size);
//     for(int i=0;i<Size;i++){
//         int x;
//         cin>>x;
//         a.push_back(x);
//         // cin>>a[i];
//     } 
//     sort01(a);
//     for(int i=0;i<Size;i++){
//         cout<<a[i]<<" ";
//     } 
//     return 0;
// }


    //two pointer
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortzo(vector<int> &a){
    int n = a.size();
    int i=0;
    int j=n-1;
    
    while(i<j){
        if(a[i]==0) i++;
        else if(a[j]==1) j--;
        else if(a[i]==1 && a[j]==0){
            a[i]=0;
            a[j]=1;
            i++;
            j--;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(i<noz) a[i]=0;
    //     else a[i]=1;
    // }
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sortzo(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}