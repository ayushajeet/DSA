#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next=NULL;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int count(Node* head){
    int n =0;
    Node* temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e= new Node(5);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    cout<<count(a);

    return 0;
}