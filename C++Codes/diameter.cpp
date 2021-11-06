#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * left ;
    Node * right;

    Node(int d ){
        data= d;
        left =NULL;
        right =NULL;
    }
};

Node * Addedge()
{
    int d; 
    cin>>d;
    if(d ==-1)
    {
        return 0;
    }
    Node * n= new Node(d);
    n->left = Addedge();
    n->right= Addedge();
    return n;

}
int height( Node * root){
    if (root==NULL){
        return 0;
    }
   int  h1= height(root->left);
   int  h2= height(root->right);
    return  1+ max(h1,h2);
}
void printall(Node * root )
{
 if(root== NULL)
 return;

 cout<<root->data<<" ";
 printall(root->left);
 printall(root->right);
 
 return ;
}




int main(){
    
    Node * root = Addedge();
    printall(root);
    int h= height(root);
     cout<<endl<<h;
    return 0;
    
}