//Find The Minimum Element In Unsorted Array And Swap it With The Element At Begining....//
//Example:  12 45 23 51 19 8
//Step 1: 1st minimum element to Swap with Begining
//res: 8 45 23 51 19 12
//Step 2: 1st element is already sorted so rest of the element with begining of unsorted element
//res 2: 8 12 23 51 19 45
//follow the upper step & Swap it..
//res 3: 8 12 19 51 23 45
//res 4: 8 12 19 23 51 45
//res 5: 8 12 19 23 45 51 (Sorted Array)

//Coding

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
