#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int i=l;
    int j=mid+1;
    int k=0;
    int b[r-l+1];

    while(i<=mid && j<=r)
    {
        if(arr[i]<=arr[j])
        {
          b[k]=arr[i];
          i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
        }
        k++;
    } 
    if(i>mid)
    {
        while(j<=r)
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid)
        {
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int x=l;x<=r;x++)
    {
        arr[x]=b[x-l];
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main()
{
    int arr[]={8,6,4,15,14,13,12};
    mergesort(arr,0,6);

    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}