#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data; 
    Node * next;
     Node(int d){
         data=d;
         next=NULL;
     }
};

void inserNode(int data, Node * &head)
{
     if(head==NULL){
         head = new Node(data);
         return;
     }

     Node * n = new Node(data);
     n->next=head;
     head= n;
     return;
}
void printNode(Node * head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;

}
int main(){
 Node * head= NULL;
 inserNode(2,head);
 inserNode(5,head);
 inserNode(7,head);
 printNode(head);
}