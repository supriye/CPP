#include<bits/stdc++.h>
using namespace std;

// C++ linear time solution for stock span problem

 
// A stack based efficient method to calculate
// stock span values
void calculateSpan(int arr[], int n, int Span[])
{
    // Create a stack and push index of first
    // element to it
    stack<int> st;
    st.push(0);
 
    // Span value of first element is always 1
    Span[0] = 1;
 
    // Calculate span values for rest of the elements
    for (int i = 1; i < n; i++) {

        // Pop elements from stack while stack is not
        // empty and top of stack is smaller than
        // arr[i]

        while (!st.empty() && arr[st.top()] <= arr[i])
            st.pop();
 
        // If stack becomes empty, then arr[i] is
        // greater than all elements on left of it,
        // i.e., arr[0], arr[1], ..arr[i-1].  Else
        // arr[i] is greater than elements after
        // top of stack
        Span[i] = (st.empty()) ? (i + 1) : (i - st.top());
 
        // Push this element to stack
        st.push(i);
    }
}
 

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int span[n];

    calculateSpan(arr,n,span);

    for (int i = 0; i < n; i++)
    {
         cout << span[i] << " ";
    }
    cout<<endl;
 
    return 0;
}


