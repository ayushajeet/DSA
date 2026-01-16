// user inputs- no of rows(no of lines) and no of columns(no of things in each line)

// #include<iostream>
// using namespace  std;
// int main()
// {
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;

//     int m;
//     cout<<"Enter number of coluns: ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
    
// } 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     int m;
//     cout<<"Enter number of columns: ";
//     cin>>m;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=m;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows: ";
//     cin>>n;
//     // int m;
//     // cout<<"Enter no of rows: ";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// reverse triangle    formula=n+1-i
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows: ";
//     cin>>n;
//     // int m;
//     // cout<<"Enter no of rows: ";
//     // cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=n+1-i;j>=1;j--){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// number triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*i-1;j+=2){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Alphabet square
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// star plus
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int mid = n/2+1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==mid || j== mid) cout<<"*";
                
//             else cout<<" ";
                
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// cross star
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j || i+j==n+1) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// floyd's triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     int k=1;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows: ";
//     cin>>n;
//     int a = 5;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a = 1;
//         else a = 0;
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows: ";
//     cin>>n;
//     int a = 5;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a = 1;
//         else a = 0;
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// flipped star triangle
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            // for spaces
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            // for star
            cout<<"*";
        }
        cout<<endl;
    }
    
        
    }
    
    