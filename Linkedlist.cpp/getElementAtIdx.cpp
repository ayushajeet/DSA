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
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIndx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"Invalid idx"<<endl;
        }
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
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
    ll.insertAtHead(10);
    ll.displayrec();
    ll.insertAtHead(20);
    ll.displayrec();
    ll.insertAtHead(30);
    ll.displayrec();
    ll.insertAtIndx(10,100);
    ll.displayrec();
    cout<<ll.getAtIdx(2);
    return 0;
}

