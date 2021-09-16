// C++ Code for Palindrome Partitioning
// Problem
#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

bool isPalindrome(string Str, int i, int j)
{
    if(i == j)
    {
      return true;
    }
	while(i < j)
	{
	if(Str[i] != Str[j])
		return false;
	i++;
	j--;
	}
	return true;
}
int minPalPartion(string str, int i, int j)
{
	if( i >= j || isPalindrome(str, i, j) )
    {
      return 0;
    }

        
    if(dp[i][j] != -1)
    {
      return dp[i][j];
    }
	
	int ans = INT_MAX;
	for(int k = i; k <= j-1; k++)
	{
    
	  int count = minPalPartion(str, i, k) + minPalPartion(str, k + 1, j) + 1;

    // //   Optimised code
    // int left,right;

    //  if(dp[i][k] != -1)
    //      left = minPalPartion(str,i,k);
    // else
    //     left = dp[i][k];
     
    //    if(dp[k+1][j] == -1)
    //       right = minPalPartion(str,k+1,j);
    //   else
    //       right=dp[k+1][j];

    //    int count = 1 + left + right;
		                                     
	   ans = min(ans, count);
	}

	dp[i][j] = ans;
   return dp[i][j];
}

int main() {

    memset(dp,-1,sizeof(dp));

	string str ;
    cin >> str;

	cout << "Min cuts needed for " <<
	        "Palindrome Partitioning is " <<
	         minPalPartion(str, 0, str.length() - 1) << endl;

	return 0;
}

