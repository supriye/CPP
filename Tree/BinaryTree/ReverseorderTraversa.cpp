// Reverse Level Order Traversal 

// Given a binary tree of size N, find its reverse level order traversal.
// ie- the traversal must begin from the last level.

// Example 1:

// Input :
//         1
//       /   \
//      3     2

// Output: 3 2 1
// Explanation:
// Traversing level 1 : 3 2
// Traversing level 0 : 1
// Example 2:

// Input :
//        10
//       /  \
//      20   30
//     / \ 
//    40  60

// Output: 40 60 20 30 10
// Explanation:
// Traversing level 2 : 40 60
// Traversing level 1 : 20 30
// Traversing level 0 : 10

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)


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

void ReverseLevelOrder(Node* root)
{
vector<int> ans;
if(root==NULL)
{
   return;
}
queue<Node*> q;
 q.push(root);
while(!q.empty())
    {
        Node* node = q.front();
        ans.push_back(node->data);
            if(node->left)
              q.push(node->left);
            if(node->right)
              q.push(node->right);
              q.pop();
        }
        reverse(ans.begin(),ans.end());
        for(int i = 0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
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

    ReverseLevelOrder(root);
    


    return 0;
}


