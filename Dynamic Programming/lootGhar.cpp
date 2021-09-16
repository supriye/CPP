// CPP program to find the maximum stolen value
#include <bits/stdc++.h>
using namespace std;
 
// calculate the maximum stolen value
int maxLoot(int *highval, int n)
{
    if (n == 0)
    {
      return 0;
    }
        
    if (n == 1)
    {
      return highval[0];
    }   
    if (n == 2)
    {
      return max(highval[0], highval[1]);
    }
        
 
    // dp[i] represent the maximum value stolen
    // so far after reaching house i.
    int dp[n];
 
    // Initialize the dp[0] and dp[1]
    dp[0] = highval[0];
    dp[1] = max(highval[0], highval[1]);
 
    // Fill remaining positions
    for (int i = 2; i<n; i++)
    {
      dp[i] = max(highval[i]+dp[i-2], dp[i-1]);
    }
    return dp[n-1];
}
 
// Driver to test above code
int main()
{
    int hval[] = {6, 7, 1, 3, 8, 2, 4};
    int n = sizeof(hval)/sizeof(hval[0]);
    cout << "Maximum loot possible : "
        << maxLoot(hval, n);
    return 0;
}