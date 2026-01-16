// #include<bits/stdc++.h>
// using namespace std;
// void generateParanthesis(string s, int open, int close, int n){
//     if(close==n){
//         cout<<s<<endl;
//         return;
//     }
//     if(open<n) generateParanthesis(s+'(', open+1,close,n);
//     if(close<open) generateParanthesis(s+')', open,close+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     generateParanthesis("",0,0,n);
// }

#include<iostream>
using namespace std;
void generateParanthesis(string ans, int open, int close, int n){
    if(close==n){
        cout<<ans<<endl;
        return;
    }
    if(open<n) generateParanthesis(ans+'(', open+1,close, n);
    if(close<open) generateParanthesis(ans+')', open,close+1, n);
    

}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    generateParanthesis("",0,0,n);
    return 0;
}