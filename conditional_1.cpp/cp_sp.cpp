#include<iostream>
using namespace std;
int main(){
    cout<<"Enter cost price: ";
    int cp;
    cin>>cp;
    cout<<"Enter selling price: ";
    int sp;
    cin>>sp;
    if(cp>sp){
        cout<<"Seller has made loss: "<<cp-sp<<endl;
    }else if(sp>cp){
        cout<<"Seller has made profit: "<<sp-cp<<endl;
    }
    else {
        cout<<"Seller has made neither profit nor loss: ";
    }
    return 0;
}