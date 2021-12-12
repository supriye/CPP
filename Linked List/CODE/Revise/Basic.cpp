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
void insertAtHead(node* &head,int val)
{
  node* n= new node(val);
  n->next = head;
  head = n;

}

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

bool search(node* head,int key)
{
  node* temp=head;
  while(temp!=NULL)
  {
    if(temp->data==key)
    {
      return true;
    }
    temp=temp->next;
  }
  return false;
}

void deleteAtHead(node* &head)
{
  node* todelete=head;
  head=head->next;

  delete todelete;
}

void deletenode(node* &head,int val)
{
  if(head==NULL)
  {
    return;
  }
  if(head->next==NULL)
  {
    deleteAtHead(head);
    return;
  }
  node*temp=head;
  while(temp->next->data!=val)
  {
    temp=temp->next;
  }
  node* todelete=temp->next;
  temp->next=temp->next->next;

  delete todelete;
}
// iterative Way

node* reverse(node* &head)
{
  node* prevptr=NULL;
  node* currptr = head;
  node* nextptr;

  while (currptr!=NULL)
  {
    nextptr=currptr->next;  //store next ptr

    currptr->next=prevptr;  // <-

    prevptr=currptr;
    currptr=nextptr;
  }
  return prevptr;
}

// recursive Way

node* recursiverev(node* &head)
{
  if(head==NULL || head->next==NULL)
  {
    return head;
  }
  node* n = recursiverev(head->next);
  head->next->next=head;
  head->next=NULL;

  return n;
}

// Reverse K Node

node* reverseKNode(node* &head, int k)
{
  node* prevptr=NULL;
  node* currptr = head;
  node* nextptr;

  int count = 0;
  while(currptr!=NULL && count<k)
  {
     nextptr=currptr->next;  //store next ptr

    currptr->next=prevptr;  // <-

    prevptr=currptr;
    currptr=nextptr; 
    count++;
  }
  
  if(nextptr!=NULL)
  {
    head->next=reverseKNode(nextptr,k);
  }

  return prevptr;

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
  insertAtTail(head,3);
  insertAtTail(head,4);
  insertAtTail(head,5);
  insertAtTail(head,6);
 

  //  int k=2;
  //  node* n=reverseKNode(head,k);
  //  display(n);

  node* n1=recursiverev(head);
  display(n1);

  return 0;
}