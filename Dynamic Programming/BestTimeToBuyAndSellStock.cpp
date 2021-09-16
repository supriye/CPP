#include<bits/stdc++.h>
using namespace std;

int maxprofit(vector<int> &prices)
{
    int maxpro = 0;
    int minprice = INT_MAX;
    
    for (int i = 0; i < prices.size(); i++)
    {
        minprice = min(minprice,prices[i]);
        maxpro = max(maxpro,prices[i]-minprice);
    }
    return maxpro; 
}

int main()
{
    vector<int> prices{ 100, 180, 260, 310, 40, 535, 695 };

    cout << "Best time to buy: " << maxprofit(prices) << endl;

    return 0;

}