#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(row*col)

int min_cost_path(int i,int j,vector<vector<int> > &grid , vector<vector<int> > &dp)
{
    int row = grid.size();
    int col = grid[0].size();

    if(i == (row-1) && (col -1))
    {
        return grid[i][j];
    }
    if(i >= row || j >= col)
    {
        return INT_MAX;
    }
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int right = grid[i][j] + min_cost_path(i , j+1 , grid,dp);
    int left = grid[i][j] + min_cost_path(i+1 , j , grid,dp);

    return dp[i][j] = (grid[i][j] + min(right,left));
}

int main()
{
    int row,col;
    cin >> row >> col;

    vector<vector<int> > grid(row, vector<int> (col,0));
    vector<vector<int> > dp(row, vector<int> (col,-1));

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << min_cost_path(row - 1,col - 1,grid,dp) << endl;

    return 0;
}