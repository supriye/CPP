#include<bits/stdc++.h>
using namespace std;

bool zeroSum(int arr[],int n)
{
    sort(arr,arr+n);

    for(int i = 0;i<n;i++)
    {
        int low = 0;
        int high = n-1;

        while(low<high)
        {
            if(arr[i]+arr[low]+arr[high]==0)
            {
              cout<<arr[i]<<" "<<arr[low]<<" "<<arr[high]<<" ";
                return true;
            }
            else if(arr[i]+arr[low]+arr[high]<0)
            {
                low++;
            }
            else
            {
              high--;
            }
        }
    }
    return false;
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
   
   zeroSum(arr,n);
   
    return 0;

}