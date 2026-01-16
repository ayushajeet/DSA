// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
// }
// int main(){
//     Node a;
//     a.val=10;
//     Node b;
//     b.val=15;
//     Node c;
//     c.val=20;
//     Node d;
//     d.val=25;

//     //create ll
//     a.next=&b;
//     b.next=&c;
//     b.next=&c;
//     c.next=NULL;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(10);
    
    Node b(15);
    Node c(20);
    Node d(25);

    //create ll
    a.next=&b;
    b.next=&c;
    
    c.next=&d;
    cout<<a.val<<endl;;
    //Node* ptr=&b;
    //cout<<(*ptr).val;
    cout<<(*(b.next)).val<<endl;
    cout<<b.next->val<<endl;
    cout<<((b.next)->next)->val<<endl;

    //   (*((*(a.next)).next)).val;
    cout<<(*((*(a.next)).next)).val<<endl;
    //a se dirext d ka value
    cout<<(((a.next)->next)->next)->val;
    return 0;
}