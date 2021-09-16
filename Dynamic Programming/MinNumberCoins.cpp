#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n*sum)

int dp[1001][101];
 
int min_coins(int coin[], int n, int sum)
{
    if (sum == 0)
    {
      return 0;
    }

    if(dp[n][sum] != -1)
    {
      return dp[n][sum];
    }

     // Initialize result
   int res = INT_MAX;

   for (int i=0; i<n; i++)
   {
     if (coin[i] <= sum)
     {
         int sub_res = min_coins(coin, n, sum - coin[i]);
 
         // Check for INT_MAX to avoid overflow and see if
         // result can minimized
         if (sub_res != INT_MAX && sub_res + 1 < res)
         {
            res = sub_res + 1;
         }     
     }
   }
   return res;
}
 
int main()
{
  memset(dp,-1,sizeof(dp));

   int n;
   cin >> n;

   int coin[n];

   for(int i=0;i<n;i++)
   {
     cin >> coin[i];
   }
   int sum;
   cin >> sum;

   cout << min_coins(coin,n,sum) << endl;
     
   return 0;
}