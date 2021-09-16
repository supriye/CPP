#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n^2)

int dp[1005][1005];

int CPS(string x,int n,int m)
{
   if(n > m)
   {
       return 0;
   }
   if(n == m)
   {
       return 1;
   }
     
    if(dp[n][m] == -1)
    {
      if(x[n] == x[m])
       {
         dp[n][m] = 1 + CPS(x,n+1,m) + CPS(x,n,m-1);
       }
     else
       {
         dp[n][m] = CPS(x,n,m-1) + CPS(x,n+1,m) - CPS(x,n+1,m-1);
       }
    }
    return dp[n][m];
}

int main()
{
    memset(dp,-1,sizeof(dp));
     
    string x;
    
    cin >> x ;

    int k = x.size();
    
    cout <<"Count of Palidrome is: "<< CPS( x,0,k-1) ;
     
    return 0;
}