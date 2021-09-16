// Genral Format

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int i,int j)
{
    if(i > j)
    {
      return 0;
    }
     
     int ans = 0;

    for(int k = i;k < j; k++)
    {
        //Calculate tempans 

        int tempans = solve(arr,i,k) + solve(arr,k+1,j);  //+ -> sign depends on Question 
                                                        //   Variation

        ans = function(tempans);
    }
    return ans;
}