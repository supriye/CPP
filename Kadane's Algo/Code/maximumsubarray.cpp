#include<bits/stdc++.h>
using namespace std;

int maxsubarraysum(int arr[],int n)
{
    int count = 0;
    int maxsum = 0;

    for(int i=0;i<n;i++)
    {
      count = count + arr[i];
      maxsum = max(maxsum,count);

      if(count > maxsum)
      {
          count = maxsum;
      }
      if(count<0)
      {
          count = 0;
      }
    }
    return maxsum;
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
    cout<<maxsubarraysum(arr,n)<<endl;

    return 0;
}