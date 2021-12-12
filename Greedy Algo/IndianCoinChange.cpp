#include<bits/stdc++.h>
using namespace std;

// Approach:
// 1. Start from the largest value ,till we can include it,take it.
// 2. Else move on the smaller value

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;

    sort(arr.begin(),arr.end(), greater<int>());

    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans += x/arr[i];
        x -= x/arr[i] * arr[i];
    }
    cout << ans <<endl;
    return 0;
}