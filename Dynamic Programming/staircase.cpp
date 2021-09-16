#include<bits/stdc++.h>
using namespace std;

int dp[51];

int staircase(int n)
{
   if(dp[n] != -1)
    {
        return dp[n];
    }

   dp[n] = staircase(n-1) + staircase(n-2) + staircase(n-3);
   return dp[n];
}

int main()
{
   for(int i=0;i<51;i++)
    {
       dp[i]=-1;
    }
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    
    int n;
    cin>>n;
    cout<<staircase(n)<<endl;
    return 0;
}