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

// 1. Push root to first stack.
// 2. Loop while first stack is not empty
//    2.1 Pop a node from first stack and push it to second stack
//    2.2 Push left and right children of the popped node to first stack
// 3. Print contents of second stack



// Iterative function to perform postorder traversal on the tree
void postorder(node* root)
{
    // create an empty stack and push the root node
    stack<node*> st1;
    st1.push(root);
 
    // create another stack to store postorder traversal
    stack<int> st2;
 
    // loop till stack is empty
    while (!st1.empty())
    {
        // pop a node from the stack and push the data into the output stack
        node* curr = st1.top();
        st1.pop();
 
        st2.push(curr->data);
 
        // push the left and right child of the popped node into the stack
        if (curr->left) {
            st1.push(curr->left);
        }
 
        if (curr->right) {
            st1.push(curr->right);
        }
    }
    
     // print postorder traversal
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
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

    postorder(root);

    return 0;
}
