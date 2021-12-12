#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int> > &arr,int row,int col,int n)
{
    for(int i=0;i<row;i++)
    {
        if(arr[i][col]==1)
        {
            return false;
        }
    }
    int i=row;
    int j=col;
    while(i>=0 && j>=0)
    {
        if(arr[i][j]==1)
        {
            return false;
        }
        i--;
        j--;
    }
    i=row;
    j=col;
    while(i>=0 && j<n)
    {
        if(arr[i][j]==1)
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}

bool NQueen(vector<vector<int> > &arr,int row,int n)
{
    if(row>=n)
    {
      return true;
    }
    for(int j=0;j<n;j++)
    {
       if(isSafe(arr,row,j,n))
       {
           arr[row][j]=1;

      if(NQueen(arr,row+1,n))
       {
         return true;
       }    
        arr[row][j]=0;//Backtacking
      }  
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    vector<vector<int> > arr(n,vector<int> (n,0) );

    if(NQueen(arr,0,n))
    {
      for(int x=0;x<n;x++)
      {
        for(int y=0;y<n;y++)
        {
            cout<<arr[x][y]<<" ";
        }
        cout<<endl;
      }
    }
    return 0;
}
    