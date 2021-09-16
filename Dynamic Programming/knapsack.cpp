#include<bits/stdc++.h>
using namespace std;

// Same problem occurs on Rod Cutting Problem Which is based on Unbounded Knapsack.

int val[1001],wt[1001];

int dp[1001][1001];

int Knapsack(int n, int w)
{
  if(w <= 0)
  {
      return 0;
  }
  if(n <= 0)
  {
      return 0;
  }
   
   if(dp[n][w] != -1)
   {
       return dp[n][w];
   }

  if(wt[n-1] > w)
  {
     dp[n][w] = Knapsack(n-1 , w);
  }
  else
  {
    dp[n][w] = max(Knapsack(n-1,w),Knapsack(n-1,w-wt[n-1]) + val[n-1]);
  }
  
   return dp[n][w];
}

int main()
{
    for(int i=0;i<1001;i++)
    {
        for(int j=0;j<1001;j++)
        {
            dp[i][j] = -1;
        }
    }

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
      cin >> wt[i];
    }

    for(int i=0;i<n;i++)
    {
      cin >> val[i];
    }

    int w;
    cin >> w;

    cout << Knapsack(n , w) << endl;
    return 0;
}
