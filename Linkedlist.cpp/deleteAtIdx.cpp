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
            cout<<"List iss empty";
            return;
        }
        Node*  temp = head;
        head=head->next;
        delete temp;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        Node* oldtemp= tail;
        temp->next=NULL;
        tail=temp;
        delete oldtemp;
        size--;
    }
    void deletAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid";
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }

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
    ll.deletAtIdx(1);
    ll.displayrec();
    return 0;
}

