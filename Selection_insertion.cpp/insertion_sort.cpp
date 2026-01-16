//time complexity

    //->best case:-o(n)
    //->average case:-o(n2)
    //->worst case:-o(n2)

//it is stable
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={8,2,6,1,11};
    int n =5;
    for(int ele: arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    //insertion sort
    for(int i=1;i<n;i++){
        int j=i;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //     else swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele: arr){
        cout<<ele<<" ";
    }
    return 0;
}




