#include<bits/stdc++.h>
using namespace std;

// Approaach:
// 1. Create a Map
// 2. while travelling, keep track of elements and when we find (k+1)th without element 
    //    = break;
    // 3. output the element and frequency using map

int main()
{
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    map<int,int> freq;

    for(int i=0;i<n;i++)
    {
        int presentSize = freq.size();
        if(freq[arr[i]] == 0 && presentSize == k)
            break;

            freq[arr[i]]++;
    }
    return 0;
}