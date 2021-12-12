#include<bits/stdc++.h>
using namespace std;

void Kclosest(int arr[],int n,int x,int k)
{
    priority_queue<pair<int,int> > maxheap;

    for(int i=0;i<n;i++)
    {
      maxheap.push({abs(arr[i] - x),arr[i]});

      if(maxheap.size() > k)
      {
          maxheap.pop();
      }
    }
    while(maxheap.size() > 0)
    {
        cout << maxheap.top().second << " ";
        maxheap.pop();
    }
}

int main()
{
    int n;cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int x,k;cin >> x >> k;

    Kclosest(arr,n,x,k);

    return 0;
}