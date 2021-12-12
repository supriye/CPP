#include<bits/stdc++.h>
using namespace std;

int maxArea(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    int area = 0;
    while(low<high)
    {
        area = max(area,min(arr[low],arr[high])*(high-low));

        if(arr[low]<arr[high])
        {
            low++;
        }
        else{
            high--;
        }
    }
    return area;
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
   
 cout<<maxArea(arr,n);
 cout<<endl;
   
 return 0;

}