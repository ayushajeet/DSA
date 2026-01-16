#include<iostream>
#include<vector>
using namespace std;
void dis(int arr[3][3]){    //in function we must have to pass the size of rows and column otherwise error will occur
    arr[0][0]=10;
}
int main(){
    int arr[][3]={{1,2,3},{4,5},{6,7,8}};

    cout<<arr[0][0]<<endl;
    dis(arr);
    cout<<arr[0][0];

    return 0;
}