// Question 1:

// upperCase to lowerCase Conversion & Vice-Vesra

#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str = "adschgsdyeowp";
   cout<<'a'-'A'<<endl;

//    convert into upperCase

    for(int i=0;i<str.size();i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // convert to lowerCase

    for(int i=0;i<str.size();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;

    // inBuiltFunction to Conversion

    string s = "fakjsdhflak";

// convert to UpperCase

    transform(s.begin(),s.end(),s.begin(), ::toupper);

    cout << s << endl;

    // Covert to LowerCase

    transform(s.begin(),s.end(),s.begin(), ::tolower);

    cout << s << endl;

    return 0;
}