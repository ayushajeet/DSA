// dereference operator can be called star(*)operator

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     int *p=&x;
//     // p k andr jo address rkha h, us address pe jao and wha ki value ko print kro.
//     cout<<*p<<endl;   
//     // updation of x
//     x = 12;
//     cout<<*p;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p=&x;
    // p k andr jo address rkha h, us address pe jao and wha ki value ko print kro. :- DEREFERENCE 
    cout<<*p<<endl;   
    // updation of x
    *p = 6;
    cout<<*p<<endl;
    cout<<x<<endl;
    return 0;
}