#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
  if(s.length()==0) //Base Case
  {
    return;
  }

  string restofstring = s.substr(1);
  reverse(restofstring );
  cout<<s[0];
}

int main()
{
  reverse("Supriye");
  return 0;
}
