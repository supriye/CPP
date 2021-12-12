// Product array puzzle 
// Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all
// the elements of nums except nums[i].

 

// Example 1:

// Input:
// n = 5
// nums[] = {10, 3, 5, 6, 2}
// Output:
// 180 600 360 300 900
// Explanation: 
// For i=0, P[i] = 3*5*6*2 = 180.
// For i=1, P[i] = 10*5*6*2 = 600.
// For i=2, P[i] = 10*3*6*2 = 360.
// For i=3, P[i] = 10*3*5*2 = 300.
// For i=4, P[i] = 10*3*5*6 = 900.
// Example 2:

// Input:
// n = 2
// nums[] = {12,0}
// Output:
// 0 12
 

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(n)
 

// Constraints:
// 1 <= n <= 1000
// 0 <= numsi <= 200
// Array may contain duplicates.

#include<bits/stdc++.h>
using namespace std;

int productpuzzle(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int k=i+1;
        int j=n-1;
        while(k<j)
        {
            int p=arr[k]*arr[j];
            i++;
        }
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


    return 0;
}