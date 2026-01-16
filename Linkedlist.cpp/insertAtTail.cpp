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
void displayLLrec(Node* Head){
    if(Head==NULL) return;
    cout<<Head->val<<" ";
    displayLLrec(Head->next);
}
void insertAtTail(Node* head, int val){
    Node* t = new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=t;
}
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

    displayLLrec(a);
    cout<<endl;
    insertAtTail(a,6);
    displayLLrec(a);
    return 0;
}
