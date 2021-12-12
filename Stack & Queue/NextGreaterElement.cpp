#include<bits/stdc++.h>
using namespace std;


// Time Complexity: O(n) 

// 3 steps process:
// <step 1.> if stack is empty then -1.
// <step 2.> if stack.top()>arr[i] then print stack.top().
// <step.3> if stack.top()<=arr[i] then stack.pop()and 2 condition apply
            //                        <1> stack is empty
            //                        <2> stack.top() is greater then arr[i].

            

// A Stack based C++ program to find next
// greater element for all array elements.
#include <bits/stdc++.h>
using namespace std;
 
/* prints element and NGE pair for all
elements of arr[] of size n */

void printNGE(int arr[], int n)
{
    stack<int> s;
 
    /* push the first element to stack */

    s.push(arr[0]);
 
    // iterate for rest of the elements

    for (int i = 1; i < n; i++)
    {
 
        if (s.empty()) {
            s.push(arr[i]);
            return;
        }
 
        /* if stack is not empty, then
           pop an element from stack.
           If the popped element is smaller
           than next, then
        a) print the pair
        b) keep popping while elements are
        smaller and stack is not empty */

        while (s.empty() == false && s.top() < arr[i])
        {
            cout << s.top() << " --> " << arr[i] << endl;    
            s.pop();
        }
 
        /* push next to stack so that we can find
        next greater for it */

        s.push(arr[i]);
    }
 
    /* After iterating over the loop, the remaining
    elements in stack do not have the next greater
    element, so print -1 for them */

    while (s.empty() == false) {
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
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
    printNGE(arr,n);

    return 0;
}
