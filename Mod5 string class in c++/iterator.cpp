#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // string::iterator it;
    cin >> s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    // cout << *s.begin() << endl;      //for access 1st character
    // cout << *(s.end() - 1) << endl;  //for access end character

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    // shortcut loop
    //  for (char c : s)
    //      cout << c << endl;

    return 0;
}