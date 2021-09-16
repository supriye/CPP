// Given an array of length ‘N’, where each element denotes the position of a stall.
// Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive.
// To prevent the cows from hurting each other, you need to assign the cows to the stalls,
// such that the minimum distance between any two of them is as large as possible. 
// Return the largest minimum distance.

#include<bits/stdc++.h>
using namespace std;

bool CanPlaceCows(int arr[],int n,int cows,int dist)
{
    int start = 0;
    int count = 1;
    for(int i = 1;i<n;i++)
    {
        if(arr[i]-start>=dist)
        {
            count++;
            start=arr[i];
        }
        if(count == cows)
        {
            return true;
        }
    }
    return false;
}

int AggresiveCow(int n,int arr[],int k)
{
    sort(arr,arr+n); 
    int ans = 0;

    int low = 1;
    int high =arr[n-1];

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(CanPlaceCows(arr,n,k,mid))
        {
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;

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

   cout<<AggresiveCow(n,arr,k)<<endl;

    return 0;
}