#include <bits/stdc++.h>
using namespace std;

int peakelement(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
       if(mid>0 & mid<n-1)
       {
           if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
           {
               return mid;
           }
           else if(arr[mid-1]>arr[mid])
           {
               return end=mid-1;
           }
           else
             start = mid+1;
       }
       else if(mid==0)
       {
           if(arr[0]>arr[1])
           {
               return 0;
           }
           else
             return 1;
       }
       else if(mid==n-1)
       {
          if(arr[n-1]>arr[n-2])
          {
              return n-1;
          }
          else
            return n-2;
       }
            
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int value;
    // cin>>value;

    cout << peakelement(arr, n) << endl;
    return 0;
}
