
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next=NULL;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void Revdisplayrec(Node* head){
//     if(head==NULL) return;
//     Revdisplayrec(head->next);
//     cout<<head->val<<" ";
// }
// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(3);
//     Node* d = new Node(4);
//     Node* e= new Node(5);

//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     Revdisplayrec(a);     //tc=O(n)  sc=O(n)

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this-> val=val;
        this->next=NULL;
    }
};
void ReverseLLrec(Node* Head){
    if(Head==NULL) return;
    
    cout<<Head->val<<" ";
    ReverseLLrec(Head->next);
};
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    ReverseLLrec(a);
    return 0;
}
