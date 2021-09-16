#include<bits/stdc++.h>
using namespace std;

void premutrecur(string str, int j)
{
    if(str.size() - 1 == j)
    {
        cout<<str<<endl;
        return;
    }
    for(int i = j;i<str.size();i++)
    {
        swap(str[i],str[j]);
        premutrecur(str,j+1);
        swap(str[i],str[j]);
    }
}

int main()
{
   premutrecur("ABC",0);

    return 0;
}