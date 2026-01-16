// The size of a pointer is independent of the data type it points to.
// It only depends on the architecture (32-bit or 64-bit) of the system/compiler.
// Why do we have different pointer types if their size is the same?
// Even though all pointers occupy the same number of bytes in memory (to store an address), the type of pointer tells the compiler how to interpret the data at that address.
// Think of it like:
// The pointer value = house address (location).
// The pointer type = what’s inside that house (how many bytes to read/write).

#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *p = &x;
    cout<<&x<<endl;
    cout<<p;
    return 0;
}

