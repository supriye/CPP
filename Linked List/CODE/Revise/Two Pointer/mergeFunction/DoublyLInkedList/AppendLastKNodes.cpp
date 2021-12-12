// Time Complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
       int data;
       node* next;
       node* prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    n->next=head;
    if(head!=NULL)
    {
       head->prev=n;
    } 
    head=n;
}

void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}

int findlength(node* &head)
{
    int len = 0;
    node* temp = head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* KnodeAppend(node* &head,int k)
{
    node* newhead;
    node* newtail;
    node* tail = head;

    int len = findlength(head);
    k=k%len;
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==len-k)
        {
            newtail=tail;
        }
        if(count==len-k+1)
        {
            newhead=tail;
        }
          tail=tail->next;
          count++;
    }
    newtail->next=NULL;
    tail->next=head;

    return newhead;
}

int main()
{
    node* head = NULL;

    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* n=KnodeAppend(head,3);
    display(n);

    return 0;
}