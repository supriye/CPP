#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
  struct  node* left;
  struct  node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void ReplaceNode(node* root,int level=0)
{
    if(root == NULL)
    {
        return;
    }

    root->data = level;

    ReplaceNode(root->left,level+1);
    ReplaceNode(root->right,level+1);
}

// Inorder->left,root,right
void Inorder(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    
}

int main()
{
   struct node* root=new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left= new node(4);
    root->left->right= new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    Inorder(root);
    cout<<endl;
    ReplaceNode(root);
    Inorder(root);

    

    return 0;
}