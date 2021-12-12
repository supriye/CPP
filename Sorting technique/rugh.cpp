#include<bits/stdc++.h>
using namespace std;

int Linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    // this is main ()
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    cout<<Linearsearch(arr,n,key)<<endl;
    return 0;
}
