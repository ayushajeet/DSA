#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &vector1, vector<int> &vector2){
    int l1 = vector1.size();
    int l2 = vector2.size();
    int i=0; //for vector1
    int j=0; //for vector2
    int k=0; //for new vector
    vector<int> res(l1+l2);
    while(i<l1 && j<l2){
        if(vector1[i]<vector2[j]){
            res[k]=vector1[i];
            i++;
            k++;
        }else{
            res[k]=vector2[j];
            j++;
            k++;
        }
    }
    // if(i==l1){
    //     while(j<l2){
    //         res[k]=vector2[j];
    //         j++;
    //         k++;
    //     }
    // }else if(j==l2){
    //     while(i<l1){
    //         res[k]=vector1[i];
    //         i++;
    //         k++;
    //     }
    // }

    while(i < l1){
    res[k] = vector1[i];
    i++;
    k++;
}
while(j < l2){
    res[k] = vector2[j];
    j++;
    k++;
}

    return res;
}

int main(){
    int n;
    cout<<"Enter size of arra1: ";
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int m;
    cout<<"Enter size of arra2: ";
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    vector<int> vec = merge(v1,v2);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}