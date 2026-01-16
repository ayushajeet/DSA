#include<bits/stdc++.h>
using namespace std;
void permu(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.size();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permu(ans+ch,left+right);
    }
}
int main(){
    string str="abc";
    permu("",str);
    return 0;
}