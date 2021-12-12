// Count triplets with sum smaller than X 
// Given an array arr[] of distinct integers of size N and a sum value X,
// the task is to find count of triplets with the sum smaller than the given sum value X.

 

// Example 1:

// Input: N = 6, X = 2
// arr[] = {-2, 0, 1, 3}
// Output:  2
// Explanation: Below are triplets with 
// sum less than 2 (-2, 0, 1) and (-2, 0, 3). 

// Example 2:

// Input: N = 5, X = 12
// arr[] = {5, 1, 3, 4, 7}
// Output: 4
// Explanation: Below are triplets with 
// sum less than 12 (1, 3, 4), (1, 3, 5), 
// (1, 3, 7) and (1, 4, 5).


 

// Expected Time Complexity: O(N2).
// Expected Auxiliary Space: O(1).

 

// Constraints:
// 3 ≤ N ≤ 10^3

#include<bits/stdc++.h>
using namespace std;

int triplet(int arr[],int n,int sum)
{
    int count = 0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++)
	    {
	        int start=i+1;
	        int end=n-1;
	        while(start<end)
	        {
	            int x = arr[i]+arr[start]+arr[end];
	            if(x<sum)
	            {
	                count +=(end-start);
	                start++;
	            }
	            else
	              end--;
	        }
	    }
	    return count;
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
    int sum;
    cin>>sum;

    cout<<triplet(arr,n,sum)<<endl;

  return 0;
}

 