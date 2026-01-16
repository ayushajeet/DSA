    //max
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter m: ";
//     cin>>m;
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int arr[m][n];
//     int max = INT_MIN;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]>max){
//                 max= arr[i][j];
//             }

//         }
        
//     }
//     cout<<max<<endl;
    
//     return 0;
// }


    //smax
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter m: ";
    cin>>m;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[m][n];
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max= arr[i][j];
            }

        }
        
    }
    cout<<max<<endl;
    int smax = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<max && arr[i][j]!=max){
                smax= arr[i][j];
            }

        }
        
    }
    cout<<smax<<endl;
    return 0;
}