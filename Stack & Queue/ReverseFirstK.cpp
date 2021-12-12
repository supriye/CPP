#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n+k). 


 void reversefirstkele(queue<int> &q,int k)
 {
     if(q.empty() || k>q.size())
     {
         return;
     }
     if(k<=0)
     {
         return;
     }


 /* Push the first K elements
       into a Stack*/

     stack<int> st;
     for(int i=0;i<k;i++)
     {
         st.push(q.front());
         q.pop();
     }
    
      /* Enqueue the contents of stack
       at the back of the queue*/

     while(!st.empty())
     {
         q.push(st.top());
         st.pop();
     }

    /* Remove the remaining elements and
       enqueue them at the end of the Queue*/

     for(int i=0;i<q.size()-k;i++)
     {
         q.push(q.front());
         q.pop();
     }
 }

 void print(queue<int> &q)
 {
     while(!q.empty())
     {
         cout<<q.front()<<" ";
         q.pop();
     }
     cout<<endl;
 }

 int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
 
    // int k = 5;
    reversefirstkele(q,5);
    print(q);
}