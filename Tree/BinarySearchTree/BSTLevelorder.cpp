#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *LevelOrder(Node *root , int key)
{
     if(root==NULL)
     {  
        root = new Node(key);
        return root;
     }
     if(key <= root->data)
     {
        root->left = LevelOrder(root->left, key);
     }
     else
     {
       root->right = LevelOrder(root->right, key);
     }
     
     return root;    
}

Node* constructBst(int arr[], int n)
{
    if(n==0)
    {
      return NULL;
    }
    
    Node *root = NULL;
 
    for(int i=0;i<n;i++)
    {
      root = LevelOrder(root , arr[i]);
    } 
     
    return root;
}

void inorderprint(Node* root)
{
    if (root == NULL)
    {
       return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);   
}
 
 int main()
{
    int arr[]={10,2,1,13,11};
    int n = 5;
    Node* root = constructBst(arr, n);
    inorderprint(root);

    return 0;

}