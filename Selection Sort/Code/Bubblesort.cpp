#include<bits/stdc++.h>
using namespace std;
 void bubblesort(int arr[],int n)
 {
     int count = 1;
     while(count < n)
     {
         for(int i = 0; i< n - count;i++)
         {
             if(arr[i]>arr[i+1])
             {
                 int temp = arr[i];
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
             }
         }
         count++;
     }
     cout<<count<<endl;
    //  for(int i = 0;i<n;i++)
    //  {
    //      cout<<arr[i]<<" ";
    //  }
    //  cout<<endl;
 }

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubblesort(arr,n);

    return 0;
}