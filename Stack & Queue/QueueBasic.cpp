#include<bits/stdc++.h>
using namespace std;
#define n 100

class Queue
{
   int* arr;

   int back;
   int front;

   public:
      Queue()
      {
          arr = new int[n];
          back=-1;
          front=-1;
      }

    // push in Queue(always apply on Back)
    //  EnQueue Operation

    void push(int x)
    {
        if(back == n-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1)
        {
            front++;
        }
    }

    // delete operation in Queue(Always on Front)
    // i.e Dequeue opration

    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements exist"<<endl;
            return;
        }
        front++;
    }

    // Show element on front
    // i.e peek operation


    int peek()
    {
      if(front==-1 || front>back)
       {
        cout<<"no elements exist"<<endl;
        return -1;
       }
       return arr[front];
    }

    // check element empty or not


    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    
    cout<<Q.peek()<<endl;
    Q.pop();

    cout<<Q.peek()<<endl;
    Q.pop();

    cout<<Q.peek()<<endl;
    Q.pop();

    cout<<Q.peek()<<endl;
    Q.pop();

    cout<<Q.empty()<<endl;

    return 0;

}