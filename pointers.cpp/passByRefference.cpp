#include<bits/stdc++.h>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a;
    cout<<"Enter 1st number: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number: ";
    cin>>b;
    swap(&a, &b);
    cout<<a<<" "<<b;

}