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

int maxpathsumutill(Node *root,int &ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int left = maxpathsumutill(root->left,ans);
    int right = maxpathsumutill(root->right,ans);

    int Nodemax = max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans = max(ans,Nodemax);
    int singlepathsum = max(root->data,max(root->data+left,root->data+right));

    return singlepathsum;

}
int maxpathsum(Node* root)
{
    int ans = INT_MIN;
    maxpathsumutill(root,ans);
    return ans;
}