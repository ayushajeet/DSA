// #include<bits/stdc++.h>
// using namespace std;
// void substring(string ans, string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     substring(ans+ch, original.substr(1));
//     substring(ans, original.substr(1));

// }
// int main(){
//     string str="abc";
    
//     substring("",str);
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// void substring(string ans, string original, int idx){
//     if(original.size()==idx){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[idx];
//     substring(ans+ch, original,idx+1);
//     substring(ans, original,idx+1);

// }
// int main(){
//     string str="abc";
    
//     substring("",str,0);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void substring(string ans, string original, int idx,vector<string> &v){
    if(original.size()==idx){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    substring(ans+ch, original,idx+1,v);
    substring(ans, original,idx+1,v);

}
int main(){
    string str="abc";
    vector<string> v;
    substring("",str,0,v);
    for(string ele: v){
        cout<<ele<<endl;
    }
    return 0;
}

