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

void printleftboundry(node* root)
{
  if(root == NULL)
   {
      return;
   }
  if(root->left)
  {
    cout<<root->data<<" ";
    printleftboundry(root->left);
  }
  else if(root->right)
  {
      cout<<root->data<<" ";
      printleftboundry(root->right);
  }
}

void printrightboundry(node* root)
{
  if(root == NULL)
  {
    return;
  }
  if(root->right)
  {
      cout<<root->data<<" ";
      printrightboundry(root->right);
  }
  else if(root->left)
  {
      cout<<root->data<<" ";
      printrightboundry(root->left);
  }
}

void printleaf(node* root)
{
  if(root == NULL)
  {
    return;
  }
  printleaf(root->left);

  if(!root->left && !root->right)
  {
      cout<<root->data<<" ";
  }

   printleaf(root->right);
}

void printBoundry(node* root)
{
  if(root == NULL)
  {
    return;
  }

  cout<<root->data<<" ";

  printleftboundry(root->left);

  printleaf(root->left);
  printleaf(root->right);

  printrightboundry(root->right);
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

    printBoundry(root);

    

    return 0;
}