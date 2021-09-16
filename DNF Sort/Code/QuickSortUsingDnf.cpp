#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void QuickSortDnf(int arr[],int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    int pivot = arr[high];

    while (mid<=high)
    {
        if(arr[mid]<pivot)
        {
           swap(arr[low],arr[mid]);
           low++;
           mid++;
        }
        else if(arr[mid]>pivot)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
        else{
            mid++;
        }
    }
    
}

int main()
{
    int arr[]={4,2,1,4,2};
    QuickSortDnf(arr,5);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}