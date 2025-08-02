// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter marks: ";
//     cin>>marks;
//     if(marks>90 && marks<=100){
//         cout<<"excellent";
//     }else if(marks>=81 && marks<=90){
//         cout<<"very good";
//     }else if(marks>=71 && marks<81){
//         cout<<"Good";
//     }else if(marks>=61 && marks<71){
//         cout<<"can do better";
//     }else if(marks>=51 && marks<61){
//         cout<<"Average";
//     }else if(marks>=41 && marks<51){
//         cout<<"Below average";
//     }else{
//         cout<<"faile";
//     }
//     return 0;
// }




#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks>90){
        cout<<"Excellent";
    }else{
        if(marks>80){
            cout<<"very good";
        }else{
            if(marks>70){
                cout<<"Good";
            }else{
                if(marks>60){
                    cout<<"can do better";
                }else{
                    if(marks>50){
                        cout<<"average";
                    }else{
                        if(marks>40){
                            cout<<"below average";
                        }else{
                            cout<<"faile";
                        }
                    }
                }
            }
        }
    }
    return 0;
}