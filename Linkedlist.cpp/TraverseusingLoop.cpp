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
    Node a(1);
    Node b(2);
    Node c(3);
    Node d(4);
    a.next=&b;
    b.next=&c;
    c.next=&d;

    Node temp= a;
    while(1){
        cout<<temp.val<<" ";
        if(a.next==NULL) break;
        temp=*(temp.next);
    }

    return 0;
} 