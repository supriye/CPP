#include<bits/stdc++.h>
using namespace std;


void Kfrequent(int arr[],int n,int k)
{
    unordered_map<int,int> mp;
    priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > minheap; 
    
    for(auto i = mp.begin(); i!=mp.end();i++)
    {
      minheap.push({i->second,i->first});

      if(minheap.size() > k)
      {
          minheap.pop();
      }
    }  
      while(minheap.size() > 0)
      {
        cout << minheap.top().second << " ";
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

    Kfrequent(arr,n,k);

    return 0;
}