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

Node* SearchInBst(Node*  root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return SearchInBst(root->left,key);
    }
    return SearchInBst(root->right,key);
}

int main()
{
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    // SearchInBst(root,5);

    // Node* node = new Node(5);
    // cout<<SearchInBst(root,5)<<" ";

    if(SearchInBst(root, 5) == NULL){
         cout << "key Doesn't Exist";
    }
    else{
        cout<<"key Exist";
    }

    return 0;
       
}