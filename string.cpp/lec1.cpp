// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     cout<<str<<endl;
//     cout<<str.size();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string s1;
//     getline(cin,s1);
//     string s2;
//     getline(cin,s2);

//     //string s3=s1+s2;
//     string s3 = s1.append(s2);
//     cout<<s3;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     str.push_back('x');
//     cout<<str;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int i=0;
//     int j=str.size()-1;
//     while(i<=j){
//         // swap(str[i],str[j]);
//         // i++;
//         // j--;
//         char temp = str[i];
//         str[i]= str[j];
//         str[j]=temp;
//         i++;
//         j--;
//     }
    
//     cout<<str;
    
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int size=0;
//     while(str[size]!='\0'){
//         size++;
//     }
//     cout<<size;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i=0;
    int j=str.size()-1;
    while(i<j){
        // swap(str[i],str[j]);
        // i++;
        // j--;
        if(str[i]!=str[j]){
            cout<<"not palindrome";
            return 0;
        }
        i++;
        j--;
    }
    
    cout<<"str is palindrome";
    
    return 0;
}