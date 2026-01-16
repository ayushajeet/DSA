#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter ro 1: ";
    cin>>a;
    int b;
    cout<<"Enter co 1: ";
    cin>>b;

    int m;
    cout<<"Enter ro 2: ";
    cin>>m;
    int n;
    cout<<"Enter co 1: ";
    cin>>n;
    if(b==m){
        int arr1[a][b];
        cout<<"Enter elements of matrix1: ";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>arr1[i][j];
            }
        }
        cout<<endl;
        int arr2[m][n];
        cout<<"Enter elements of matrix2: ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr2[i][j];
            }
        }
        cout<<endl;

        // resultant matrix
        int res[a][n];
        for(int i=0;i<a;i++){
            for(int j=0;j<n;j++){
                res[i][j]=0;
                //res[i][j]=arr1[i][0]*arr2[0][j]+arr1[i][1]*arr2[1][j];
                for(int k=0;k<b;k++){
                    res[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }

        for(int i=0;i<a;i++){
            for(int j=0;j<n;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }


    }else{
        cout<<"Matrix cant be multipled";
    }
    return 0;
}