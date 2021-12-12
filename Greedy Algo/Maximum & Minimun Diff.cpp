#include<bits/stdc++.h>
using namespace std;

// Approach:
// To Maximizze abs(A[i] - A[j])
// 1. A[i] should be as large as possible.
// 2. A[j] should be as small as possible.

// for a sorted array
// maximum diff = (A[n-1] - A[0]) + (A[n/2] -A[1]).................

// To Minimise abs(A[i]-A[j])
// 1. The Diffrence should between A[i] and A[j] should be similar.

// For a sorted array,
// Minimum diff = A[1]-A[0]+A[3]-A[2]........
//              =(sum of odd elements) - (sum of even elements)

int main()
{
  int n;cin >> n;
  vector<int> a(n);
  for(auto &i : a)
      cin >> i;
  sort(a.begin(),a.end());

  long long mn = 0, mx = 0;
  for(int i=0;i<n/2;i++)
  {
      mx +=(a[i+n/2]-a[i]);
      mn +=(a[2*i+1]-a[2*i]);
  }
  cout << mn << " " << mx << endl;

    return 0;
}