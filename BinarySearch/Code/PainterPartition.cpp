


#include<bits/stdc++.h>
using namespace std;

int FindFeasible(int boards[],int n,int limit)
{
  int sum = 0;
  int painters = 1;

  for(int i=0;i<n;i++)
  {
    sum+= boards[i];
    if(sum>limit)
    {
        sum = boards[i];
        painters++;
    }
  }
  return painters;
}

int PainterPartition(int boards[],int n,int m)
{
    int totalLength = 0;
    int k =  0;

    for(int i=0;i<n;i++)
    {
        k = max(k,boards[i]);
        totalLength+=boards[i];
    }
    int low = k;
    int high = totalLength;
    while(low<high)
    {
        int mid = (low+high)/2;
        int painters = FindFeasible(boards,n,mid);
        if(painters<=m)
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return low;
}

int main()
{
   int n,m;
   cin>>n>>m;

   int boards[n];
   for(int i=0;i<n;i++)
   {
       cin>>boards[i];
   }

   cout<<PainterPartition(boards,n,m);
   cout<<endl;

    return 0;
}