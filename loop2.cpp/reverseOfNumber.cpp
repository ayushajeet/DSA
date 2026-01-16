// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int rev=0;
//     int last_digit=0;
//     while(n!=0){
//         rev=rev*10;
//         last_digit=n%10;
//         rev+=last_digit;
//         n/=10;
//     }
//     cout<<rev;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int rev=0;
    int last_digit=0;
    while(n!=0){
        last_digit=n%10;
        rev=rev*10;
        rev+=last_digit;
        n/=10;
    }
    cout<<rev;
    return 0;
}