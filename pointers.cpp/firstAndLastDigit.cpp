#include<iostream>
using namespace std;
void find(int n, int* a, int* b){
    *b=n%10;
    while(n>9){
        n = n/10;
    }
    *a=n;
    return;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int firstDigit,lastDigit;
    int* a = &firstDigit;
    int* b = &lastDigit;
    find(n,a,b);
    cout<<firstDigit<<" "<<lastDigit;
    return 0;
}