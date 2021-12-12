#include<bits/stdc++.h>
using namespace std;
#define n 100

// Time Complexity : O(1)
// Space Complexity : O(1) because i am using variable

// Implementation Stack Using Array

class Stack
{
    int* arr;
   
    int top;

    int minele;

    public:
    // creating Constructor
    Stack()
    {
      arr = new int[n];
      top=-1;
      minele = -1;
    }

    void push(int x)
    {
        if(top == -1)
        {
            top++;
            arr[top]=x;
            minele = x;
        }
        else
        {
            if(x>=minele)
            {
                top++;
                arr[top]=x;
            }
            else
            {
                top++;
                arr[top] = 2*x-minele;
                minele=x;
            }
        }
        cout<<"ele "<< x <<endl;
    }

    void pop()
    {
        if(top==-1)
        {
            return;
        }
        else
        {
            if(arr[top]>=minele)
            {
               top--;
              
            }
            else
            {
                minele=2*minele-arr[top];
                top--;
            }
        }
    }

    int Top()
    {
        if(top==-1)
        {
            return -1;
        }
        else
        {
            if(arr[top]>=minele)
            {
                return arr[top];
            }
            else
            {
                return minele;
            }
        }
       
    }

    int getmin()
    {
        if(top==-1)
        {
            return -1;
        }
        return minele;
    }
};


int main()
{
   
    Stack st;
    st.push(3);
    st.push(5);
    cout<<st.getmin()<<endl;
    st.push(2);
    st.push(1);
    cout<<st.getmin()<<endl;
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    return 0;

}