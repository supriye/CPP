// For A Given Array And an Integer X,Find the
// minimum Subarray Size For Which Sum > X..

// Approach:

// <1> use variable ans,sum & start.
// <2> iterate over array & start adding elements to sum.
// <3> if sum > x,remove elements from the start.

// Time Complexity: O(n).

// Ex: arr[]={1,4,45,6,10,19}
// Sum = 0;ans = INT_MAx;
// x = 51