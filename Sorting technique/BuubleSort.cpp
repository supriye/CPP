// Reaptedly Swap Two Adjacent Elements If They Are In Wrong Order.....
//Wrong Order Means:- Left Is Greater Then Right//
// if i have n elements then we have to sort n-1 iterations before we get our sorted array //
//Swap A/c to Iteration wise
//Example: 1st Iteration = n-1
//         2nd Iteration = n-2
// And so on...........
//i th iteration = i-1//

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
  
   int counter = 1;
  
while(counter<n)
   {
       for(int i=0;i<n-counter;i++)
       {
           if(arr[i]>arr[i+1])
           {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
           }
       
       }
       counter++;
   }
   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 return 0;
}