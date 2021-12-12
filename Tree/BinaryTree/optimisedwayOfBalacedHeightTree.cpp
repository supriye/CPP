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


bool isBalanced(Node* root,int* Height)
{
    if(root==NULL)
    {
      return true;
    }
    int lh = 0, rh = 0;
    if(isBalanced(root->left,&lh)==false)
    {
      return false;
    }
    if(isBalanced(root->right,&rh)==false)
    {
      return false;
    }

    *Height = max(lh,rh)+1;
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


   int Height=0;

    if(isBalanced(root,&Height))
    {
      cout<<"Balanced tree"<<"\n";
    }
    else{
        cout<<"unbalanced tree"<<"\n";
    }
    return 0;
}