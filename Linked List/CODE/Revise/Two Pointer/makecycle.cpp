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

void makecycle(node* &head, int pos)
{
  node* temp=head;
  node* startnode;

  int count = 1;
  while(temp->next!=NULL)
  {
    if(count == pos)
    {
      startnode=temp;
    }
    temp=temp->next;
    count++;
  }

  temp->next=startnode;
}

bool detectCycle(node* &head)
{
   node* slow=head;
   node* fast=head; 

  while(fast!=NULL && fast->next!=NULL)
  {
     slow = slow->next;
     fast = fast->next->next;

    if(fast==slow)
    {
      return true;
    }
  }
  return false;
}

void removeCycle(node* &head)
{
  node* slow = head;
  node* fast = head;
   

  do
  {
     slow = slow->next;
     fast = fast->next->next;
  } while (slow!=fast);

//  while (fast && fast->next) {
//         if (slow == fast)
//             break;
//         slow = slow->next;
//         fast = fast->next->next;
//     }

  fast=head;
  if(slow == fast)
  {
    slow = head;

      if(slow == fast) {
              while(fast->next != slow) fast = fast->next;
        }
          else {
                while(slow->next!=fast)
                    {
                       slow=slow->next;
                       fast=fast->next;
                    }
            }
  }
 

  slow->next=NULL;
  
}

// void detectAndRemoveLoop(node* &head)
// {
//     // If list is empty or has only one node
//     // without loop
//     if (head == NULL || head->next == NULL)
//         return;
 
//     node *slow = head, *fast = head;
 
//     // Move slow and fast 1 and 2 steps
//     // ahead respectively.
//     slow = slow->next;
//     fast = fast->next->next;
 
//     // Search for loop using slow and
//     // fast pointers
//     while (fast && fast->next) {
//         if (slow == fast)
//             break;
//         slow = slow->next;
//         fast = fast->next->next;
//     }
 
//     /* If loop exists */
//     if (slow == fast)
//     {
//         slow = head;
           
//         // this check is needed when slow
//         // and fast both meet at the head of the LL
//           // eg: 1->2->3->4->5 and then
//         // 5->next = 1 i.e the head of the LL
//           if(slow == fast) {
//               while(fast->next != slow) fast = fast->next;
//         }
//           else {
//             while (slow->next != fast->next) {
//                 slow = slow->next;
//                 fast = fast->next;
//             }
//         }
 
//         /* since fast->next is the looping point */
//         fast->next = NULL; /* remove loop */
//     }
// }

void deletemiddle(node* &head)
{
  node* slow = head;
  node* fast = head;
  node* prev;

  while(fast!= NULL && fast->next!=NULL)
  {
    fast = fast->next->next;
    slow = prev;
    slow = slow->next;
  }
  prev->next=slow->next;
  delete slow;

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

//   makecycle(head,3);
   
//  cout<<detectCycle(head)<<endl;
//  removeCycle(head);
// detectAndRemoveLoop(head);
// removeCycle(head);
deletemiddle(head);
 display(head);
// cout<<detectCycle(head)<<endl;

  return 0;
}