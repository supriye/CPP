#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int min)
{
  int studentRequired = 1,sum = 0;
  for(int i =0;i<n;i++)
  {
      if(arr[i]>min)
      {
          return false;
      }
      if(sum+arr[i]>min)
      {
          studentRequired++;
          sum = arr[i];

          if(studentRequired > m)
          {
              return false;
          }
      }
      else{
          sum+=arr[i];
      }
  }
  return true;
}

int AllocateMinimumPages(int arr[],int n,int m)
{
  int sum = 0;
  if(n<m)
  {
      return -1;
  }
  for(int i=0;i<n;i++)
  {
      sum = sum+arr[i];
  }
  int low = 0;
  int high = sum;
  int ans = INT_MAX;

  while(low<=high)
  {
      int mid = (low+high)/2;
      if(isPossible(arr,n,m,mid))
      {
          ans = min(ans,mid);
          high = mid-1;
      }
      else
      {
          low = mid+1;
      }
  }
  return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;


    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   cout<<AllocateMinimumPages(arr,n,m)<<endl;
   return 0;

}