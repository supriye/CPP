#include<bits/stdc++.h>
using namespace std;

int main()
{

    // initalize the char array
    char test;
    cin>>test;

    // initalize the variable
    int i = 0, j = strlen(test)-1;
    // As Strlen saves the null character
    // threefore initlize a bool
    bool x = true;
    for(i = 0;i<j;i++)
    {
        if(test[i] != test[j])
        {
            x = false;
        }     
        j--;
    }
    if(x)
    {
        cout<<"string is palindrome\n";
    }
    else{
        cout<<"no"
    }
    return 0;
}