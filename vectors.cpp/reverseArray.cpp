#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    vector<int> a;
    a.push_back(12);
    a.push_back(32);
    a.push_back(28);
    a.push_back(56);
    a.push_back(88);
    a.push_back(50);
    display(a);
    int x;
    cout<<"enter x : ";
    cin>>x;
    int y;
    cout<<"enter y : ";
    cin>>y;
    // int i = a;
    // int j = b;
    while(x<=y){
        int temp = a[x];
        a[x]=a[y];
        a[y]=temp;
        x++;
        y--;
    }
    display(a);
    return 0;
}