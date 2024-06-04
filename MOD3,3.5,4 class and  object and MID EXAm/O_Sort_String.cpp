#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        fr[c - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < fr[i]; j++)
        {
            cout << (char)(i + 97);
        }
    }

    return 0;
}