// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int* ptr1 = &a;
//     int* ptr2 = ptr1+4;
//     cout<<"ptr1 address is: "<<ptr1<<endl;
//     cout<<"ptr1 address is: "<<ptr2<<endl;

//     // In C++, when you subtract two pointers of the same type, the result is not in bytes.
//     // Instead, it gives the number of elements (of that type) between them.
//     cout<<"ptr2 - ptr1 is: "<<ptr2-ptr1<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr1 = &a;
    // ptr2 stores address of ptr1 (pointer to pointer)
    int** ptr2 = &ptr1;
    int* ptr3 = *ptr2;
    if(ptr1 == ptr3){
        cout<<"Same memmory allocation";
        return 0;
    }else{
        cout<<"ptr1 points to: "<<ptr1<<endl;
        cout<<"ptr2 points to: "<<ptr3<<endl;
    }
    return 0;
}