#include<bits/stdc++.h>
using namespace std;

int squareroot(int a)
{
    // Linear Search
    // int ans =0;
    // for(int i=1;i<a;i++)
    // {
    //     if(i*i<=a)
    //     {
    //         ans = max(ans,i);
    //     }
    // }
    // return ans;

    // Using Binary Search
    int low = 0;
    int high = a;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(mid*mid<=a)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low - 1;
}

int main()
{
  int a;
  cin>>a;

  cout<<squareroot(a)<<endl;
  return 0;
}