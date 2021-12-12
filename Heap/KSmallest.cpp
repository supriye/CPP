#include<bits/stdc++.h>
using namespace std;

int KSmallest(int arr[],int n,int k)
{
    priority_queue<int> maxheap;

    for(int i=0;i<n;i++)
    {
      maxheap.push(arr[i]);

      if(maxheap.size() > k)
      {
          maxheap.pop();
      }
    }
    return maxheap.top();
}

int main()
{
    int n;cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int k;cin >> k;

    cout << KSmallest(arr,n,k) << endl;

    return 0;
}