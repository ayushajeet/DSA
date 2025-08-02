#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>=65 && ascii<91) && (ascii>=97 && ascii<123)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O'  || ch=='U'){
            cout<<"character is vowel";
        }else{
            cout<<"charcter is consonant";
        }
    }else{
        cout<<"invalid charcter";
    }
    return 0;
}
