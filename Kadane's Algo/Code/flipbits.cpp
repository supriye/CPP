#include<bits/stdc++.h>
using namespace std;

int flipbits(int arr[],int n)
{
    int ans = 0;
    int start = 0;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
           count++;
           start--;
        }
       else
       {
           start++;
       }
        ans=max(start,ans);
       if(start<0)
           start = 0;
    }
    return ans+count;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<flipbits(arr,n)<<endl;

    return 0;
}