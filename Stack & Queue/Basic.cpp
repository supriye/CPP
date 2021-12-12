// Stack
// All Time Complexity : O(1)

#include<iostream>
using namespace std;
#define n 100

// Implementation Stack Using Array

class stack
{
    int* arr;
   
    int top;

    public:
    // creating Constructor
    stack()
    {
      arr = new int[n];
      top=-1;
    }

    // push operation

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    // pop operation

    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        top--;
    }

    // top operation

    int Top()
    {
        if(top==-1)
        {
            cout<<"no stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    // empty operation

     bool empty()
     {
         return top==-1;
     }
};

int main()
{
   stack st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   st.push(6);
   cout<<st.Top()<<endl;
   st.pop();
   cout<<st.Top()<<endl;
   st.pop();
   st.pop();
   st.pop();
   st.pop();
   st.pop();
   st.empty();
   cout<<st.Top()<<endl;
    

    return 0;

}