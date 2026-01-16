// #include<bits/stdc++.h>
// using namespace std;
// class Emplyee{
//     private:
//     string name;
//     int age;

//     public:
//     Emplyee(string name, int age){
//         this->name=name;
//         this->age=age;
//     }
//     void setName(string name){
//         this->name=name;
//     }
//     void setAge(int age){
//         this->age=age;
//     }
//     void display(){
//         cout<<"Emplyees name is: "<<name<<endl;
//         cout<<"Emplyees age is: "<<age<<endl;
//     }

// };

// int main(){
//     string name;
//     cin>>name;
//     int age;
//     cin>>age;
//     Emplyee emp(name,age);
//     emp.display();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *p=&a;
    *p=100;
    //cout<<*p<<endl;
   
    cout<<a;
    return 0;
}