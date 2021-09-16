#include<bits/stdc++.h>
using namespace std;

int firstelement(int arr[],int n,int key)
{
  int first = -1;

  int low = 0;
  int high = n-1;

  while(low<=high)
  {
      int mid = (low+high)/2;
      if(arr[mid]==key)
      {
          first=mid;
          high = mid-1;
      }
      else if(arr[mid]>key)
      {
          high = mid-1;
      }
      else{
          low = mid+1;
      }
  }
  return first;
}

int lastelement(int arr[],int n,int key)
{
 
  int last = -1;

  int low = 0;
  int high = n-1;

  while(low<=high)
  {
      int mid = (low+high)/2;
      if(arr[mid]==key)
      {
          last=mid;
          low = mid+1;
      }
      else if(arr[mid]<key)
      {
          low = mid+1;
      }
      else{
          high = mid-1;
      }
  }
  return last;
}

int findele(int arr[],int n,int key)
{
    int first,last;
    
    first = firstelement(arr,n,key);

    if(first==-1)
    {
        return 0;
    }
    last = lastelement(arr,n,key);

    int count = last - first + 1;

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
    int k;
    cin>>k;

    cout<<findele(arr,n,k);
    return 0;
}