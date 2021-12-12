
// First and last occurrences of x 
// Given a sorted array arr containing n elements with possibly duplicate elements, 
// the task is to find indexes of first and last occurrences of an element x in the given array.

// Example 1:

// Input:
// n=9, x=5
// arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
// Output:  2 5
// Explanation: First occurrence of 5 is at index 2 and last
//              occurrence of 5 is at index 5.

#include<bits/stdc++.h>
using namespace std;

int OccureneceNumber(int arr[],int n,int key)
{
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==key)
        {
             res = mid;
            start = mid+1;//last ocuurence
           //end = mid-1;//for 1st occurence
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
        else
           start = mid+1;
        
    }
    return res;
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

    int key;
    cin>>key;

    cout<<OccureneceNumber(arr,n,key)<<endl;


    return 0;
}


