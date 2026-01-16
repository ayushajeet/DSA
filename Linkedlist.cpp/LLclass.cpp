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
// class LinkedList{
//     public:
//     Node* head;
//     Node* tail;
//     int size;
//     LinkedList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void insertAtEnd(int val){
//         Node* temp = new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// }; 
// int main(){
//     LinkedList ll;
//     ll.insertAtEnd(10);
//     ll.insertAtEnd(20);
//     ll.insertAtEnd(30);
//     ll.display();
//     return 0;
// }

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
// class LinkedList{
//     public:
//     Node* head;
//     Node* tail;
//     int size;
//     LinkedList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void insertAtEnd(int val){
//         Node* temp = new Node(val);
//         if(size==0) head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void displayrec(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
// }; 
// int main(){
//     LinkedList ll;
//     ll.insertAtEnd(10);
//     ll.displayrec();
//     ll.insertAtEnd(20);
//     ll.displayrec();
//     ll.insertAtEnd(30);
//     ll.displayrec();
//     return 0;
// }

#include<iostream>
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
class Linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    
    void insertAthead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else {
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist l;
    l.insertAthead(1);
    
    l.insertAthead(2);
    l.display();

    return 0;
}

