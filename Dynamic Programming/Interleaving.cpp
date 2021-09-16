#include<bits/stdc++.h>
using namespace std;

bool interleavstr(string x,string y, string interleaving,auto &dp)
{
    if(x.empty() and y.empty() and interleaving.empty())
    {
        return true;
    }
     if(interleaving.empty())
     {
         return false;
     }

     string str=x + "|" + y + "|" + interleaving;
     
     if(dp.count(str))
     {
         return dp[str];
     }

     bool first = (!x.empty() and x[0] == interleaving[0]) and interleavstr(x.substr(1),y,interleaving.substr(1),dp);
     
     bool second = (!y.empty() and y[0] == interleaving[0]) and interleavstr(x,y.substr(1),interleaving.substr(1),dp);

     return dp[str] = (first or second);   
}

int main()
{
    string x,y,interleaving;
    cin >> x >> y >> interleaving;

    unordered_map<string , bool> dp;

    cout << "result string are: " << interleavstr(x,y,interleaving,dp);
}