#include<bits/stdc++.h>
using namespace std;
class Node{

    public :
    int data;
    Node * left;
    Node * right;

    Node(int d)
    {
        data= d;
        left=NULL;
        right= NULL;
    }
};

void printtree(Node * root ){
    if(root == NULL)
    return;

    cout<<root->data<<" ";
     printtree(root->left);
     printtree(root->right);

     return ;


}

    Node * build_tree()
    { 
        int d;
        cin>>d;
        if(d== -1)
        return 0;

        Node * n = new Node(d);
        n->left = build_tree();
        n->right= build_tree();
       
       return n;

    }
void levelOrder(Node * root)
{
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {    
        Node * temp = q.front();
         if(temp== NULL)
         {
        cout<< endl;
         q.pop();

         if(!q.empty()){
             q.push(NULL);
         }
         }
         else {
             q.pop();
             cout<<temp->data<<" ";
             if(temp->left)
             q.push(temp->left);
             if(temp-> right)
             q.push(temp->right);
         }

    }


}


int main(){

Node * root = build_tree();
 printtree(root);
 levelOrder(root);
    return 0;
}
