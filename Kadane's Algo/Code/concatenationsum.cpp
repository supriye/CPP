// Let’s define a vector/list 'CONCAT' of size 'N * K' formed by concatenating 'ARR' ‘K’ times.
// For example, if 'ARR' = [0, -1, 2] and 'K' = 3, then 'CONCAT' is given by [0, -1, 2, 0, -1, 2, 0, -1, 2].

#include<bits/stdc++.h>
using namespace std;

// Time complexity : O(n*k)

long long kadane(int arr[], int n, int k)
{
    long long maxSum = INT_MIN;
    long long curSum = 0; 
  
    for (int i = 0; i < n * k; i++) 
    { 
        curSum += arr[i % n];   
        maxSum = max(maxSum, curSum);  
        if (curSum < 0)
        {
            curSum = 0;
        } 
    } 

    return maxSum;
}

/*
    Time Complexity: O(N)
    Space Complexity: O(1)

    where 'N' is the size of 'ARR'.
*/

long long maxSubSumKConcat(int arr[], int n, int k)
{   
    long long maxSubSum;

    if (k == 1)
    {
        maxSubSum = kadane(arr, n, k);

        return maxSubSum;
    }

    int arrSum = 0;

    for (int i = 0; i < n; i++)
    {
        arrSum += arr[i];
    }

    if (arrSum <= 0)
    {   
        // Finding the maximum subarray sum for k = 2.
        maxSubSum = kadane(arr, n, 2);   
    }
    else
    {
        // Finding the maximum subarray sum for k = 2.
        maxSubSum = kadane(arr, n, 2);
        maxSubSum += (long long)(k - 2) * (long long)arrSum;
    } 

    return maxSubSum;
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
    int k;
    cin>>k;

    // cout<<maxSubSumKConcat(arr,n,k)<<endl;
    cout<<kadane(arr,n,k)<<endl;
    return 0;
}