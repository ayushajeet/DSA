//time complexity

    //->best case:-o(n2)
    //->average case:-o(n2)
    //->worst case:-o(n2)

//it is unstable
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

    //selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int idx=-1;
        //find smallest element from i to n-1
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
            }
        }
        //swap smallest element with arr[i]
        swap(arr[i],arr[idx]);
    }
    for(int ele: arr){
        cout<<ele<<" ";
    }
    return 0;
}




