#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Partition(int arr[],int low,int high)
{
  int pivot=arr[low];
  int i = low;
  int j = high;

 while(i<j)
 {
     while(arr[i]<=pivot)
     {
         i++;
     }
     while(arr[j]>pivot)
     {
         j--;
     }
     if(i<j)
     {
         swap(arr[i],arr[j]);
     }
 }   
 swap(arr[low],arr[j]);
 return j;
}

void Quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
       int j = Partition(arr, low, high);
        Quicksort(arr,low,j-1);
        Quicksort(arr,j+1,high);
    }
}

int main()
{
    int arr[7]={6,3,9,5,2,8,7};
    Quicksort(arr,0,6);

    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}