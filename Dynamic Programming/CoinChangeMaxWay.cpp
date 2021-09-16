#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n*sum)

int dp[1001][100];
 
int countPath(int coin[], int n, int sum)
{
    if (sum == 0)
    {
      return 1;
    }

    if (sum < 0)
    {
      return 0;
    }
        
    if (n <= 0 && sum >= 1)
    {
      return 0;
    }

    if(dp[n][sum] != -1)
    {
      return dp[n][sum];
    }
       return dp[n][sum] = countPath(coin, n - 1, sum) +
                                       countPath(coin, n, sum - coin[n - 1]);
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

   cout << countPath(coin,n,sum) << endl;
     
   return 0;
}
