// Question 3:
// maximum time character occur in string
// Ex: "abcacbade"
// frequency = 3
// output = 3

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "fbjsxcklewybmdaa";

    int freq[26];

    for(int i=0;i<26;i++)
       freq[i] = 0;

    for(int i=0;i<s.size();i++)
        freq[s[i]-'a']++;

    char ans = 'a';
    int maxF = 0;

    for(int i=0;i<26;i++)
    {
        if(freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxF << " " << ans << endl;

    return 0;
}