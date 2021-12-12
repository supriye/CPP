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

// Time Complexity:O(n)
//space complexity:O(log n)
void push_left_Node(stack<Node*>& st1, Node* curr)
{
   while(curr)
   {
     st1.push(curr);
     curr=curr->left;
   }
}

void push_right_Node(stack<Node*>& st2, Node* curr)
{
   while(curr)
   {
     st2.push(curr);
     curr=curr->right;
   }
}

//Using 2-Pointer Approach
bool find_pair(Node* root,int key)
{
    if(root == NULL)
    {
        return false;
    }
    stack<Node*> st1,st2;
    push_left_Node(st1,root);
    push_right_Node(st2,root);
    
    Node* low = st1.top();  //slow pointer
    Node* high = st2.top(); //high pointer

    while(low && high && low->data < high->data)
    {
        int sum = low->data + high->data;
        if(sum < key)  // increase low
        {
            push_left_Node(st1,low->right);
            low = st1.top();
            st1.pop();
        }
        else if(sum > key)  // decrease high
        {
            push_right_Node(st2,high->left);
            high = st2.top();
            st2.pop();
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node* root = new Node(15);
    root->left = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right = new Node(20);
    root->right->left = new Node(17);
    root->right->left->right = new Node(19);

    int key = 36;

    cout<<find_pair(root,key)<<endl;

    return 0;
  
}