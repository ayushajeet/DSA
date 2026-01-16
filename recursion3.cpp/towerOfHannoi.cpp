// #include<iostream>
// using namespace std;
// void hanoi(int n, char A, char B,char C){
//     if(n==0) return;
//     hanoi(n-1,A,C,B);
//     cout<<A<<" -> "<<C<<endl;
//     hanoi(n-1,B,A,C);

// }
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     hanoi(n,'A','B','C');
//     return 0;
// }



#include<iostream>
using namespace std;
void display(int n, char a, char b, char c){
    if(n==0) return;
    display(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    display(n-1,b,a,c);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    display(n,'a', 'b', 'c');
    return 0;
}