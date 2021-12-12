#include<bits/stdc++.h>
using namespace std;

void countOrigin(int arr[][2],int n,int k)
{
    priority_queue<pair<int, pair<int,int> > > maxheap;

    for(int i=0;i<n;i++)
    {
        maxheap.push({arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});

        if(maxheap.size() > k)
        {
            maxheap.pop();
        }
    }
    while(maxheap.size() > 0)
    {
        pair<int,int> p = maxheap.top().second;
        cout << p.first << " " << p.second;
        maxheap.pop();
    }
}

int main()
{
    int n;cin >> n;

    int arr[n][2];
    for(int i=0;i<n;i++)
    {
      cin >> arr[i][2];
    }
    int k;cin >> k;

    countOrigin(arr,n,k);

    return 0;
}