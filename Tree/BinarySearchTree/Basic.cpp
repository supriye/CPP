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

Node* insertBst(Node *root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insertBst(root->left,val);
    }
    if(val>root->data)
    {
        root->right=insertBst(root->right,val);
    }
    return root;
}
void inorder(Node *root)
{

    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    

    // iterative way

    // stack<Node*> s;
    // Node* curr = root;
     
    // while(curr != NULL && !s.empty())
    // {
    //     while(curr != NULL)
    //     {
    //         s.push(curr);
    //         curr = curr->left;
    //     }
    //     curr = s.top();
    //     s.pop();

    //     cout<<curr->data<<" ";

    //     curr = curr->right;
    // }

}

int main()
{
    Node* root = NULL;
    root = insertBst(root,5);
    insertBst(root,1);
    insertBst(root,3);
    insertBst(root,4);
    insertBst(root,2);
    insertBst(root,7);

    // Node* root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);

    inorder(root);
    cout<<endl;



}