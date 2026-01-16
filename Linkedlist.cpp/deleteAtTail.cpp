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
    void deleteAtTail(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        if(size==1){
            delete head;
            head=tail=NULL;
            size--;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        Node* temp1=tail;
        temp->next=NULL;
        tail=temp;
        delete temp1;
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
    ll.deleteAtTail();
    ll.displayrec();
    return 0;
}

