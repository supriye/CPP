#include<bits/stdc++.h>
using namespace std;

// Approach
// sort the decreasing order according to value/weight:
// pick from the starting till our knapsack has capicity.

bool compare(pair<int,int> p1,pair<int,int> p2)
{
   double v1 = (double) p1.first / p1.second;
   double v2 = (double) p2.first / p2.second;
  
   return v1 > v2;
}


int main()
{
    int n;
    cin >> n;

    vector<pair<int,int> > arr(n);

    for(int i=0;i<n;i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    int w;
    cin >> w;

   sort(arr.begin(),arr.end(),compare);
   
   int ans = 0;

    for(int i=0;i<n;i++)
    {
        if(w >= arr[i].second)
        {
            ans += arr[i].first;
            w -= arr[i].second;
            continue;
        }

        double vw = (double) arr[i].first/arr[i].second;
        ans += vw * w;
        w = 0;
        break;
    }
    cout << ans << endl;
    return 0;
}