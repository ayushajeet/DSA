// #include<iostream>
// using namespace std;
// void dis(int i, int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     dis(i+1,n);
// }
// int main(){
//     int i;
//     cout<<"Entr i: ";
//     cin>>i;
//     int n;
//     cout<<"Entr n: ";
//     cin>>n;
//     dis(i,n);
//     return 0;
// }


#include<iostream>
using namespace std;
void display(int n){
    if(n==0) return;
    display(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    display(n);
    return 0;
}