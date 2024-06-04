#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for (char c : s)
    {
        // cout << c << endl;
        frq[c - 'a']++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << (char)(i + 97) << " " << frq[i] << endl;
    // }

    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 0; i < frq[c - 97]; i++)
        {
            cout << c;
        }
    }

    return 0;
}