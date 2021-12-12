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

void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    stack<node*> st;
    st.push(root);

    while(!st.empty())
    {
        node* curr = st.top();
        st.pop();

        cout<<curr->data<<" ";


        // push the right child of the popped node into the stack
        if(curr->right)
        {
            st.push(curr->right);
        }


        // push the left child of the popped node into the stack
        if(curr->left)
        {
            st.push(curr->left);
        }
    }
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

    preorder(root);
   
    return 0;
}
