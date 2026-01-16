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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
     void insertAtTail(int val) {
        Node* t = new Node(val);
        if (size == 0) {
            head = tail = t;
        } else {
            tail->next = t;
            tail = t;
        }
        size++;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        if(size==1){
            delete head;
            head=tail=NULL;
            size--;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
        size--;
    }
    void displayrec(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}; 
int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.displayrec();
    ll.insertAtTail(20);
    ll.displayrec();
    ll.insertAtTail(30);
    ll.displayrec();
    ll.deleteAtHead();
    ll.displayrec();
    return 0;
}

