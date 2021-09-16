// You have 'N' empty pens whose refills have been used up. You have 'R' rupees in your pocket. 
// You have two choices of operations that you can perform each time.

// 1) Recycle 1 empty pen and get 'K' rupees as a reward.
// 2) Buy 1 refill for 'C' rupees and combine it with 1 empty pen to make one usable pen.

// Your task is to find the maximum number of usable pens that you can get.

// For example if you have 'N' = 5 , 'R' = 10 , 'K' = 2 , 'C' = 3.
// You can recycle one pen and get 2 rupees as a reward so you will have a total of 12 rupees. 
// Now you can buy 4 refills and combine it with 4 pens to make it usable. So your answer is 4.


#include<bits/stdc++.h>
using namespace std;

int RecyclePens(int n,int r,int k,int c)
{
    int low = 0;       
    int high = n;
    int ans = 0;

    while(low<=high)
    {
      int mid = (low+high)/2;
      int RecycleReward = (n-mid)*k;
      int TotalMoney = r+RecycleReward;
      int PenCost = c*mid;

      if(TotalMoney>=PenCost)
      {
          ans = mid;
          low = mid+1;
      }
      else
      {
          high = mid-1;
      }
    }
    return ans;
}

int main()
{
    int n,r,k,c;
    cin>>n>>r>>k>>c;

    cout<<RecyclePens(n,r,k,c)<<endl;
    return 0;
}