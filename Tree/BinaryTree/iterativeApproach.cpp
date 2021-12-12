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

void postorder(Node* root)
{
   stack<Node*> st;
   Node* curr = root;
   Node* prev = NULL;
   while(curr != NULL || !st.empty())
   {
       if(curr != NULL)
       {
           st.push(curr);
           curr = curr->left;
       }
       else{
           curr = st.top();
           if(curr->right == NULL || curr->right == prev)
           {
               cout<< curr->data << " ";
               st.pop();
               prev = curr;
               curr = NULL;
           }
           else
             curr = curr->right;
       }
   }
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    postorder(root);
    cout<<endl;
         

    return 0;
}