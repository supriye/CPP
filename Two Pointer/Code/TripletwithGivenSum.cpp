#include<bits/stdc++.h>
using namespace std;

bool triplet(int arr[],int n,int target)
{
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        int low = i+1;
        int high = n-1;

        while(low<high)
        {
            if(arr[i]+arr[low]+arr[high]==target)
            {
                cout<<arr[i]<<" "<<arr[low]<<" "<<arr[high]<<" ";
                return true;
            }
            else if(arr[i]+arr[low]+arr[high]<target)
            {
                low++;
            }
            else{
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

     int target;
    cin>>target;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   
    triplet(arr,n,target);

    cout<<endl;

    return 0;
}
