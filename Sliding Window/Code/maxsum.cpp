// Step 1: Calculate Sum Of First K Elements.
// Step 2:initlaize ans With This Sum.
// Step 3: Iterate Over The Rest Of The Arr keep Adding One
        //    Element in Sum & REmoving One From Start
        //    Compare New Sum with ans in each iteration..

// Time Complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[],int n,int k,int x)
{
    int sum = 0;
    int ans = 0;

    for(int i = 0;i<k;i++)
    {
        sum = sum+arr[i];
    }
        if(sum<x)
        {
            ans = sum;
        }
        for(int i=k;i<n;i++)
        {
            sum = sum - arr[i-k];
            sum = sum + arr[i];
           
           if(sum < x)
           {
               ans = max(ans,sum);
           }
        }
    // cout<<ans<<" is the max ans"<<endl;
    return ans;
}

int main()
{   
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    cout<<maxsum(arr,n,k,x);
    cout<<endl;

    return 0;
}