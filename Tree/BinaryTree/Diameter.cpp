// Number of nodes in the longest path between any 2 leaves

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

// int calcheight(node* root)
// {
//     if(root == NULL)
//     {
//       return 0;
//     }
//     return max(calcheight(root->left),calcheight(root->right)) + 1;
// }

// TimeComplexity:O(n^2)
// int calcdiameter(node* root)
// {
//     if(root == NULL)
//     {
//         return 0;
//     }
//     int lheight=calcheight(root->left);
//     int rheight=calcheight(root->right);

//     int currdiamter=lheight+rheight+1;

//     int ldiameter = calcdiameter(root->left);
//     int rdiameter = calcdiameter(root->right);

//     return max(currdiamter,max(ldiameter,rdiameter));
// }

// Another Approach
// TimeComplexity:O(n)

int calcdiameter(node* root,int* height)
{
    if(root == NULL)
    {
       *height=0;
       return 0;
    }
    int lh=0;
    int rh=0;
    int ldiameter = calcdiameter(root->left, &lh);
    int rdiameter = calcdiameter(root->right,&rh);

    int currdiameter=lh+rh+1;
    *height = max(lh,rh) + 1;

    return max(currdiameter,max(ldiameter,rdiameter));
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

    int height=0;

    cout<<calcdiameter(root,&height)<<endl;   

    return 0;
}