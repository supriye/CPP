#include<bits/stdc++.h>
using namespace std;

void Klargest(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int> > minheap; 
    
    for(int i=0;i<n;i++)
    {
      minheap.push(arr[i]);

      if(minheap.size() > k)
      {
          minheap.pop();
      }
    }
    while(minheap.size() > 0)
    {
        cout << minheap.top() << " ";
        minheap.pop();
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
    int k;cin >> k;

    Klargest(arr,n,k);

    return 0;
}