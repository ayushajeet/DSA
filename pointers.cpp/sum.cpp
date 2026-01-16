// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter 1st value: ";
//     cin>>a;
//     int b;
//     cout<<"Enter 2nd value: ";
//     cin>>b;
//     int x = a;
//     int y= b;
//     int* p1=&x;
//     int* p2=&y;
//     int z = *p1+ *p2;
//     cout<<z;
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int a,b;
    int* p1 = &a;
    int * p2 = &b;

    cout<<"Enter 1st number: ";
    cin>>*p1;

    cout<<"Enter 1st number: ";
    cin>>*p2;

    int z = a+b;
    cout<<z;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     int* p1 = &a;
//     int* p2 = &b;
//     cin>>*p1;
//     cin>>*p2;
//     int sum = *p1+*p2;
//     cout<<*p1<<" "<<*p2<<endl;
//     cout<<"Sum is: "<<sum;
//     return 0;
// }