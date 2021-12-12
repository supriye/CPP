#include<bits/stdc++.h>
using namespace std;

bool IsSafe(vector<vector<int> > &arr,int row,int col,int n)
{
    if(row < n && col < n && arr[row][col]==1)
    {
        return true;
    }
    return false;
}

bool RatInMaze(vector<vector<int> > &arr,int row,int col,int n,vector<vector<int> > &solnarr)
{
    if((row == (n-1)) && (col == (n-1)))
    {
        solnarr[row][col] = 1;
        return true;
    }
    if(IsSafe(arr,row,col,n))
    {
        solnarr[row][col]=1;

        if(RatInMaze(arr,row+1,col,n,solnarr))
        {
            return true;
        }
        if(RatInMaze(arr,row,col+1,n,solnarr))
        {
           return true;
        }
        solnarr[row][col]=0;
        return false;

    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    vector<vector<int> > arr(n,vector<int> (n,0) );
    vector<vector<int> > solnarr(n, vector<int> (n,0));

      for(int x=0;x<n;x++)
      {
        for(int y=0;y<n;y++)
        {
            cin>>arr[x][y] ;
        }
      }

    // for(int x=0;x<n;x++)
    //     {
    //     for(int y=0;y<n;y++)
    //     {
    //         cin>>solnarr[x][y];
    //     }
    //   }

    if(RatInMaze(arr,0,0,n,solnarr))
    {
       for(int x=0;x<n;x++)
      {
        for(int y=0;y<n;y++)
        {
            cout<<solnarr[x][y]<<" ";
        }
        cout<<endl;
      }
    }
    return 0;
}
  
