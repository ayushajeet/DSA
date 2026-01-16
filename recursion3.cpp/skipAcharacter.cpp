// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     getline(cin, str);

//     string ans="";
//     for(int i=0;i<str.size();i++){
//         if(str[i]!='a'){
//             ans+=str[i];
//         }
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void removeChar(string ans, string original){
//     if(original.size()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='a'){
//         removeChar(ans,original.substr(1));
//     }
//     else{
//         removeChar(ans+ch,original.substr(1));
//     }
// }
// int main(){
//     string str;
//     cout<<"Enter str: ";
//     cin>>str;
//     removeChar("",str);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
void removeChar(string ans, string original, int idx){
    if(original.size()==idx){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a'){
        removeChar(ans,original,idx+1);
    }
    else{
        removeChar(ans+ch,original,idx+1);
    }
}
int main(){
    string str;
    cout<<"Enter str: ";
    getline(cin,str);
    removeChar("",str,0);
    return 0;
}