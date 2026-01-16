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
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    
    cout<<endl;
    
}
Node* deletenode(Node* head, Node* tar){
    if(head==tar){
        head=head->next; 
        return head;
    }
    Node* temp=head;
    while(temp->next!=tar){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
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
    display(a);
    Node* head=a;
    display(head);
    head=deletenode(head,d);
    display(head);
    return 0;
}