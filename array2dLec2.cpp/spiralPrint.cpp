#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter rows: ";
    cin>>a;
    cout<<"Enter cols: ";
    cin>>b;

    int arr[a][b];
    cout<<"Enter elements: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }

    int minr=0, minc=0;
    int maxr=a-1, maxc=b-1;

    while(minr<=maxr && minc<=maxc){
        // right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;

        // down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        // left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        // up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
    return 0;
}
