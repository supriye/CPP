#include<bits/stdc++.h>
using namespace std;

bool issafe(int** arr,int i, int j, int n)
{
   if(i < n && j < n && arr[i][j] == 1)
   {
       return true;
   }
   return false;
}

bool ratinmaze(int** arr,int i, int j, int n, int** solnarr)
{
   if(i ==(n-1) && (j == (n-1)))
   {
       solnarr[i][j] = 1;
       return true;
   }
   if(issafe(arr,i,j,n))
   {
       bool flag=false;
       solnarr[i][j] = 1;
       flag = ratinmaze(arr, i+1, j, n, solnarr) or ratinmaze(arr, i, j+1, n, solnarr);
       if(not flag) solnarr[i][j] = 0;
       return flag;
   }
   return false;
   
}

int main()
{
   int n;
   cin>>n;

   int** arr = new int*[n];
   for(int x = 0; x<n;x++)
   {
       arr[x] = new int[n];
   }

   for(int x=0;x<n;x++)
   {
       for(int y = 0; y < n; y++)
       {
           cin>>arr[x][y];
       }
   }

int** solnarr = new int*[n];
   for(int x = 0; x<n;x++)
   {
       solnarr[x] = new int[n];
       for(int y = 0; y< n;y++)
       {
           solnarr[x][y]=0;
       }
   }

   if(ratinmaze(arr,0,0,n,solnarr))
   {
      for(int x=0;x<n;x++)
      {
       for(int y = 0; y< n;y++)
       {
           cout<<solnarr[x][y]<<" ";
       }
       cout<<endl;
   }

   }

    return 0;
}