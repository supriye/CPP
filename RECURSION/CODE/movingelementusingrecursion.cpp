#include<bits/stdc++.h>
using namespace std;

string movingele(string s)
{
  if(s.length()==0)
  {
    return "";
  }
  char ch = s[0];
  string ans = movingele(s.substr(1));

  if(ch=='x')
  {
    return ans+ch;
  }
  return ch+ans;
}

int main()
{
  cout<<movingele("axxxxbxxcxxxdx")<<endl;
  return 0;
}
