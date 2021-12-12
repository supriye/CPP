#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(8);

    while(!st.empty())
    {
        cout<<st.size()<<" ";
        st.pop();
        
    }
    return 0;
}