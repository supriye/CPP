#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int Height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = Height(root->left);
    int rh = Height(root->right);
    return max(lh,rh)+1;
}

bool isBalanced(Node* root)
{
    if(root==NULL)
    {
      return true;
    }
    if(isBalanced(root->left)==false)
    {
      return false;
    }
    if(isBalanced(root->right)==false)
    {
      return false;
    }
    int lh = Height(root->left);
    int rh = Height(root->right);

    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);


   

    if(isBalanced(root))
    {
      cout<<"Balanced tree"<<"\n";
    }
    else{
        cout<<"unbalanced tree"<<"\n";
    }
    return 0;
}