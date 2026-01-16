// #include<iostream>
// using namespace std;
// void swap(int* x, int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main(){
//     int a=1,b=2;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }


#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a=1,b=2;
    int* A=&a;
    int* B=&b;
    swap(A,B);
    cout<<a<<" "<<b;
    return 0;
}