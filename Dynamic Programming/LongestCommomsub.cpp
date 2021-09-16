#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n^2)

int dp[1001][1001];

int LCS(string x,string y,int n,int m)
{
    if(n == 0 || m == 0)
    {
        return 0;
    }
     
    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if(x[n-1] == y[m-1])
    {
        return dp[n][m] = 1 + LCS(x,y,n-1,m-1);
    }
    else
    {
        return dp[n][m] = max(LCS(x,y,n,m-1),LCS(x,y,n-1,m));
    }
}

int main()
{
    // for(int i=0;i<1001;i++)
    // {
    //     for(int j=0;j<1001;j++)
    //     {
    //         dp[i][j] = -1;
    //     }
    // }

    memset(dp,-1,sizeof(dp));
     
   
    string x;
    string y;
    
    cin >> x >> y;

    int n = x.length();
    int m = y.length();

    
    cout<<"Length of LCS is: "<< LCS( x, y, n, m ) ;
     
    return 0;
}