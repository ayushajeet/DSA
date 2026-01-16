// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter number: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
        
//     }
//     cout<<"Maximum element is: "<<max<<endl;
//     int smax=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]<max && arr[i]!=max){
//             smax=arr[i];
//         }
        
//     }
//     cout<<"Maximum element is: "<<smax;
//     return 0;
// }


// second largest
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest=arr[0];
        int slargest=-1;
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
        return slargest;
    }
};


// second smallest

class Solution {
  public:
    int getSecondSmallest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int smallest=arr[0];
        int ssmallest=INT_MAX;
        for(int i=1;i<n;i++){
            if(arr[i]<smallest){
                ssmallest=smallest;
                smallest=arr[i];
            }
           
            else if(arr[i]!=smallest && arr[i]<smallest){
                ssmallest=arr[i];
            }
        }
        return ssmallest;
    }
};