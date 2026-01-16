#include<iostream>
using namespace std;
void starTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int m;
    cout<<"Enter number: ";
    cin>>m;
    starTriangle(n);
    starTriangle(m);
    return 0;
}