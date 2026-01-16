// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter ro 1: ";
//     cin>>a;
//     int b;
//     cout<<"Enter co 1: ";
//     cin>>b;

//     int arr[a][b];
//     cout<<"Enter elements: ";
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<a;i++){
//         if(i%2==0){
//             for(int j=0;j<b;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }else{
//             for(int j=b-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter ro 1: ";
//     cin>>a;
//     int b;
//     cout<<"Enter co 1: ";
//     cin>>b;

//     int arr[a][b];
//     cout<<"Enter elements: ";
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=a-1;i>=0;i--){
//         if(i%2==0){
//             for(int j=0;j<b;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }else{
//             for(int j=b-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }


    //column wisw printing
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter ro 1: ";
    cin>>a;
    int b;
    cout<<"Enter co 1: ";
    cin>>b;

    int arr[a][b];
    cout<<"Enter elements: ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}