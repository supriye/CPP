#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n*m)

int dp[1001][1001];

int min(int x, int y, int z) 
{ 
  return min(min(x, y), z); 
}

int EditDist(string x,string y,int n,int m)
{
    if(n == 0)
    {
        return m;
    }

    if(m == 0)
    {
        return n;
    }
     
    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if(x[n-1] == y[m-1])
    {
        return dp[n][m] = EditDist(x,y,n-1,m-1);
    }
    else
    {
        return dp[n][m] = 1 + min(EditDist(x,y,n,m-1) //insert
                                   ,EditDist(x,y,n-1,m) //delete
                                   ,EditDist(x,y,n-1,m-1)); //Replace
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

    
    cout<<"Length of String is: "<< EditDist( x, y, n, m ) ;
     
    return 0;
}