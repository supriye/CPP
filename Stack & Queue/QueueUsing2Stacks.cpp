#include<bits/stdc++.h>
using namespace std;

// Method 1:
//  Using 2 Stacks and Dequeue Operation Costly.


// dequeue :
//   <1> if both Stack are empty then print error.
//   <2> if stack2 is Empty 
//                  while stack1 is not empty, push everything from stack1 to stack2.
//   <3> pop the element from stack2 and return it.

class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
       void push(int x)
       {
         s1.push(x);
       }

       int pop()
       {
           if(s1.empty() and s2.empty()) 
           {
               cout<<"not exist"<<endl;
               return -1;
           }
         if(s2.empty())
           {
             while(!s1.empty())
             {
                s2.push(s1.top());
                s1.pop();
              }
           }
           int topval = s2.top();
           s2.pop();
           return topval;
       }
       bool empty()
       {
           
         if(s1.empty() and s2.empty()){
             return true;
           }
           return false;
       }
};


// Method 2:

// using Function Call Stack

// dequeue :
//   <1> if stack1 is empty then print error.
//   <2> if stack has only element then return it.
//   <3> Recursively pop everything from the stack1, store the popped item in a variable,
//        res, push the res back to stack1 and return res. 

// class Queue{
//     stack<int> s1;
//     public:
//        void push(int x)
//        {
//          s1.push(x);
//        }

//        int pop()
//        {
//            if(s1.empty()) 
//            {
//                cout<<"not exist"<<endl;
//                return -1;
//            }
//            int x = s1.top();
//            s1.pop();
//            if(s1.empty())
//            {
//                return x;
//            }
//            int item = pop();
//            s1.push(x);
//            return item;

//        }

// };

int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);

   cout<<Q.pop()<<endl;
   Q.push(5);

   cout<<Q.pop()<<endl;
   cout<<Q.pop()<<endl;
   cout<<Q.pop()<<endl;
   cout<<Q.pop()<<endl;
   cout<<Q.pop()<<endl;
  
    cout<<Q.empty()<<endl;

    return 0;

}




// 
