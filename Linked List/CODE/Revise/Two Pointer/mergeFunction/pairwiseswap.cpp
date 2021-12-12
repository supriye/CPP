// Check :Linked List Palindrome Or Not
// Time Complexity : O(n)
// Space Complexity : O(1)

// its 5 step Process
// <1> Split the Linked List in The Middle
// <2> prepare two Linked list
// <3> if Odd,ignore The Middle Node.
// <4> Reverse The Second Linked List
// <5> Compare the Two Linked List.


#include<bits/stdc++.h>
using namespace std;

class node{
  public:
     int data;
     node* next;

     node(int val)
     {
       data=val;
       next = NULL;
     }
};

void insertAtTail(node* &head,int val)
{
  node* n = new node(val);
  if(head == NULL)
  {
    head=n;
    return;
  }
  node* temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=n;
  n->next=NULL;
}




void display(node* head)
{
  node* temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"NULL"<<endl;
  
}

int main()
{
  node* head=NULL;

  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,1);

cout<<checkpalindrome(head)<<endl;


  return 0;
}