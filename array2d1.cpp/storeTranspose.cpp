#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter m: ";
    cin>>m;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=arr[i][j];

        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}