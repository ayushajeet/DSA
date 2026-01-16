#include<iostream>
using  namespace std;
int main(){
    int a=10;
    int* ptr = &a;
    // a pointer needs to be dereferenced with * operator to access the memory location it points to
    cout<<"pointers value is: "<<*ptr<<endl;

    // a dereference variable is an alias, that is another name for already existing variable 
    // a reference, like a pointer is also implemented by storing the address of an object
    int &ref=a;
    cout<<"pointers value is: "<<ref;
    return 0;
}