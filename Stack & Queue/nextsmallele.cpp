#include<bits/stdc++.h>
using namespace std;

// 3 steps process:
// <step 1.> if stack is empty then -1.
// <step 2.> if stack.top()<arr[i] then print stack.top().
// <step.3> if stack.top()>=arr[i] then stack.pop()and 2 condition apply
            //                        <1> stack is empty
            //                        <2> stack.top() is smaller then arr[i].


// C++ implementation of efficient algorithm to find
// smaller element on left side
 
// Prints smaller elements on left side of every element
void printPrevSmaller(int arr[], int n)
{
    // Create an empty stack
    stack<int> S;
 
    // Traverse all array elements
    for (int i=0; i<n; i++)
    {
        // Keep removing top element from S while the top
        // element is greater than or equal to arr[i]
        while (!S.empty() && S.top() >= arr[i])
            S.pop();
 
        // If all elements in S were greater than arr[i]
        if (S.empty())
            cout << "-1, ";
        else  //Else print the nearest smaller element
            cout << S.top() << ", ";
 
        // Push this element
        S.push(arr[i]);
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
    printPrevSmaller(arr,n);

    return 0;
}
