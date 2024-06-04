#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    while (cin >> s)
    {
        int fr[26 + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            int in = s[i] - 97;
            fr[in]++;
        }
        for (char letter = 'a'; letter < 'z'; letter++)
        {
            for (int j = 0; j < n; j++)
            {
                if (letter == s[j])
                {
                    cout << s[j];
                }
            }
        }
    }

    return 0;
}