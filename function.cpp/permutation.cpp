#include<iostream>
using namespace std;
int fct(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n, int r){
    int ncr=fct(n)/(fct(r)*fct(n-r));
    return ncr;
}
int permutation(int n,int r){
    int permutation=fct(n)/fct(n-r);
    return permutation;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    int nfact = fct(n);
    int rfact= fct(r);
    int nrfact=fct(n-r);
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<ncr<<endl;
    cout<<npr;
    return 0;
}