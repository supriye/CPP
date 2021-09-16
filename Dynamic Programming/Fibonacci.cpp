#include<bits/stdc++.h>
using namespace std;

int dp[51];

int fib(int n)
{
    if(dp[n] != -1)
    {
        return dp[n];
    }
    dp[n]=fib(n-1) + fib(n-2);
    return dp[n];
} 

int main()
{
   for(int i=0;i<51;i++)
    {
       dp[i]=-1;
    }
    dp[0] = 0;
    dp[1] = 1;
    
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}