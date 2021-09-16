// if matrix given a*b & c*d
// then only multiply if b = c & resultant matrix are a*d

// if array size is n then Matrix Formed n-1.
// Matrix form Formula A[i] = A[i-1] * A[i].

#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int solve(int arr[],int i,int j)
{
    if(i >= j)
    {
      return 0;
    }
     
    if(dp[i][j] != -1)
    {
      return dp[i][j];
    }

    int ans = INT_MAX;

    for(int k = i;k <= j -1; k++)
    {
        //Calculate tempans 

        int tempans = solve(arr,i,k) + solve(arr,k+1,j) + (arr[i-1] * arr[k] * arr[j]);  
                                                
       if(tempans < ans)
       {
           ans = tempans;
       }
    }
   dp[i][j] = ans;
   return dp[i][j];
}

int main()
{
   memset(dp,-1,sizeof(dp));

   int n;
   cin >> n;

   int arr[n];

   for(int i = 0; i<n; i++)
   {
       cin >> arr[i];
   }

   cout << solve(arr,1,n-1) << endl;

    return 0;
}