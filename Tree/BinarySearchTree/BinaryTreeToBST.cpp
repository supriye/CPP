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

int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

node* buildTree(int preorder[],int inorder[],int start,int end)
{
    static int idx= 0;
    if(start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node* Node = new node(curr);
    if(start==end)
    {
        return Node;
    }
    int pos = search(inorder,start,end,curr);
    Node->left=buildTree(preorder,inorder,start,pos-1);
    Node->right=buildTree(preorder,inorder,pos+1,end);

    return Node;
}

void inorderPrint(node* root)
{
    if(root==NULL)
    {
        return;
    }
  inorderPrint(root->left);
  cout<<root->data<<" ";
  inorderPrint(root->right);
}


void inorder(node* root,vector<int> &v)
{
    if(!root)
    {
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

void inorderBST(node* root, vector<int> v, int &i)
{
    if(!root)
    {
        return;
    }
    inorderBST(root->left,v,i);
    root->data = v[i];
    i++;
    inorderBST(root->right,v,i);
}

node* BinaryTreeToBST(node* root)
{
    vector<int> v;
    inorder(root,v);

    sort(v.begin(),v.end());
    int i=0;
    inorderBST(root,v,i);

    return root;
}


int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    //build tree
    node* root=buildTree(preorder,inorder,0,4);
    inorderPrint(root);
    cout<<endl;
    BinaryTreeToBST(root);
    inorderPrint(root);


    return 0;
}