#include<bits/stdc++.h>
using namespace std;

class Stack
{
      int N;
      queue<int> q1;
      queue<int> q2;
      
      public:
      Stack()
      {
          N = 0;
      }
      
    // Method 1;

// Making Push Operation Costly;
// push operation Time Complexity : O(n)

    //   void push(int val)
    //   {
    //       q2.push(val);
    //       N++;
    //       while(!q1.empty())
    //       {
    //           q2.push(q1.front());
    //           q1.pop();
    //       }

    //       queue<int> temp = q1;
    //       q1 = q2;
    //       q2 = temp;
    //   }
      
    //   void pop()
    //   {
    //       q1.pop();
    //       N--;
    //   }

    //   int Top()
    //   {
    //       return q1.front();
    //   }

    //   int size()
    //   {
    //       return N;
    //   }

// Method 2:

    // Making Pop Operation Costly
    // pop operation Time Complexity : O(n)

    void pop()
    {
        if(q1.empty())
        {
            return;
        }

        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        queue<int> temp =q1;
        q1 = q2;
        q2 = temp;
    }

    void push(int val)
    {
        q1.push(val);
        N++;
    }

    int Top()
    {
        if(q1.empty())
        {
            return -1;
        }

        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        int ans = q1.front();
        q2.push(ans);

        queue<int> temp;
        q1 = q2;
        q2 = temp;

        return ans;
    }
    
      int size()
      {
          return N;
      }

};

int main()
{
   Stack st;

   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);

  
   cout<<st.Top()<<endl;
   st.pop();
   cout<<st.Top()<<endl;
   st.pop();
   cout<<st.Top()<<endl;
   st.pop();
   cout<<st.Top()<<endl;
   st.pop();

   cout<<st.size()<<endl;
  

    return 0;
}