#include<bits/stdc++.h>
using namespace std;


void Kfrequent(int arr[],int n)
{
    unordered_map<int,int> mp;
    priority_queue<pair<int, pair<int,int> > > maxheap;
  
    
    for(auto i = mp.begin();i != mp.end();i++)
    {
        maxheap.push({i->second,i->first});
    }
    while(maxheap.size() > 0)
    {
        int freq = maxheap.top().first;
        int ele = maxheap.top().second;

        for(int i = 1;i<=freq;i++)
        {
            cout << ele << " ";
            maxheap.pop();
        }
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

    Kfrequent(arr,n);

    return 0;
}