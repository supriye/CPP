#include<bits/stdc++.h>
using namespace std;

// RECURSIVE APPROACH

// int BinarySearch(int arr[],int n,int l,int h,int key)
// {  
//     if(l>h)
//     {
//         return -1;
//     }
//     int mid = (l+h)/2;
//     if(arr[mid]==key)
//     {
//         return mid;
//     }
//     else if(arr[mid]>key)
//     {
//         BinarySearch(arr,n,l,mid-1,key);
//     }
//     else
//        {
//          BinarySearch(arr,n,mid+1,h,key);
//        }
// }
int BinarySearch(int arr[],int n,int key)
{
    int l=0;
    int r=n-1;

    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
   cout<<BinarySearch(arr,n,key)<<" ";
   cout<<endl;
    return 0;
}