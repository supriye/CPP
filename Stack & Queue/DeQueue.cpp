//  DeQueue("Double Ended Queue")
// Advantage:
//      <1> Push And Pop From The End
//      <2> Insert And Delete From The Start
//      <3> Header File: <deque>

#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    for(auto i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    dq.pop_back();
    dq.pop_back();
    dq.pop_front();

    for(auto i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<dq.size()<<endl;

    return 0;
}