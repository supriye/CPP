// Question 2:
//   Form The Biggest Number From The Numeric String

// Ex: "53214" ---> "54321"

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "487539126";

    sort(s.begin(),s.end(),greater<int>());

    cout << s << endl;

    return 0;
}