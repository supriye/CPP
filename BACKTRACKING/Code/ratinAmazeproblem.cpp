#include<bits/stdc++.h>
using namespace std;

int countpaths = 0;

bool issafe(int i,int j,int n,vector<vector<bool> > & visited)
{
    if(i >= 0 and j >=0 and i<n and j<n and visited[i][j] == false)
    {
        return true;
    }
}


void helper(int i,int j,int n, vector<vector<int> > &grid, vector<vector<bool> > & visited)
{
   if(i == n-1 and j == n-1)
   {
       countpaths++;
       return;
   }
   if(!issafe(i,j,n,visited))
   {
       return;
   }
   visited[i][j] == true;
   if(i+1<n and grid[i+1][j] == 0)
   {
      helper(i+1,j,n,grid,visited);
   }
   if(i-1>=0 and grid[i-1][j] == 0)
   {
     helper(i-1,j,n,grid,visited);
   }
   if(j+1<n and grid[i][j+1] == 0)
   {
     helper(i,j+1,n,grid,visited);
   }
   if(j-1>=0 and grid[i][j-1] == 0)
   {
     helper(i,j-1,n,grid,visited);
   }
   visited[i][j] == false;
   return;
}

int ratinmaze(vector<vector<int> > &grid)
{
   int n = grid.size();
   vector<vector<bool> > visited(n,  vector<bool> (n, false));
   helper(0,0,n,grid,visited);
   return countpaths;
   
}

int main()
{
    int n;
    cin>>n;
     vector<vector<int> > grid(n, vector<int> (n, 0));
     for(int i=0;i<n-1;i++)
     {
         for(int j=0;j<n-1;j++)
         {
             cin>>grid[i][j];
         }
     }
     cout<<ratinmaze(grid);

     return 0;

}
