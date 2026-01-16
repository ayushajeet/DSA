#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s, int i, int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isvalid(s,i+1,j-1);
}
int main(){
    string str="shyam";
    
    cout<<isvalid(str,0,str.size()-1);
    return 0;
}