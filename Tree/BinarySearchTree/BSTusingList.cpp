#include <bits/stdc++.h>
using namespace std;
// class representing node of a linked list
class ListNode {
    public:
    int data;
    ListNode *next;
    
    ListNode(int d) {
        data = d;
    }
};
// class representing node of a tree
class TreeNode {
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int d) {
        data = d;
    }
};
// function to print the pre order traversal of a tree
void preOrder(TreeNode *root) {
    if (root != NULL) {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
TreeNode* convertToBalancedBST(ListNode *node) {
    // if the node is null, return null
    if (node == NULL) {
        return NULL;
    }
    
    // Count the number of nodes in the linked list
    ListNode *temp = node;
    int n = 0;
    while (temp != NULL) {
        n++;
        temp = temp->next;
    }
    
    if (n == 1) {
        return new TreeNode(node->data);
    }
    
    // First n/2 nodes contributes to the left subtree
    ListNode *leftHalf = new ListNode(node->data);
    ListNode *leftTemp = leftHalf;
    for (int i = 0; i < n/2 - 1; i++) {
        node = node->next;
        leftTemp->next = new ListNode(node->data);
        leftTemp = leftTemp->next;
    }
    
    node = node->next;
    // node is pointing to the middle element of the list
    // make this element as the root of the BST
    TreeNode *root = new TreeNode(node->data);
    
    // move node ahead
    node = node->next;
    
    // Remaining nodes form the right subtree of the BST
    ListNode *rightHalf = NULL;
    if (node != NULL) {
        rightHalf = new ListNode(node->data);
        ListNode *rightTemp = rightHalf;
        node = node->next;
        while (node != NULL) {
            rightTemp->next = new ListNode(node->data);
            rightTemp = rightTemp->next;
            node = node->next;
        }
    }
    
    // Recursively call the method for left and right halfs
    root->left = convertToBalancedBST(leftHalf);
    root->right = convertToBalancedBST(rightHalf);
    
    return root;
}
int main() {
    // Example 1
    ListNode *node1 = new ListNode(1);
    node1->next = new ListNode(2);
    node1->next->next = new ListNode(3);
    node1->next->next->next = new ListNode(4);
    node1->next->next->next->next = new ListNode(5);
    TreeNode *root1 = convertToBalancedBST(node1);
    preOrder(root1);
    cout<<endl;
    // Example 2
    ListNode *node2 = new ListNode(7);
    node2->next = new ListNode(11);
    node2->next->next = new ListNode(13);
    node2->next->next->next = new ListNode(20);
    node2->next->next->next->next = new ListNode(22);
    node2->next->next->next->next->next = new ListNode(41);
    TreeNode *root2 = convertToBalancedBST(node2);
    preOrder(root2);
    cout<<endl;
    
    return 0;
}