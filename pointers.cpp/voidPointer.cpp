// it can point to any type of data so it is also called generic pointer
// it is declared using the void keyword (void*)
// syntax:-  void*ptr_name
#include<iostream>
using namespace std;
int main(){
    int a = 100;
    void* void_ptr= &a;
    // int* int_ptr = (int*)void_ptr;    it typecasts the void_ptr to int* ans asigns to its int_ptr allowing accesed to integer value stored at that address
    int* int_ptr=(int*)void_ptr;
    cout<<"pointer's integer value is: "<<*int_ptr<<endl;

    float b = 2.4;
    void* void_Ptr=&b;
    float* float_ptr=(float*)void_Ptr;
    cout<<"pointer's float value is: "<<*float_ptr<<endl;

    char ch = 'A';
    void* voidPtr=&ch;
    char* charPtr=(char*)voidPtr;
    cout<<"pointer's character value is: "<<*charPtr<<endl;
    return 0;
}