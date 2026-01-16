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
    // int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];

        }
        
    }
    cout<<sum<<" ";
    return 0;
}