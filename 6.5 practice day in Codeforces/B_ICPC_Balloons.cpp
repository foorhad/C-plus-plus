#include <bits/stdc++.h>
using namespace std;
class freq
{
public:
    char value;
    int count;
};
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        freq a[26];
        for (int i = 0; i < 26; i++)
        {
            a[i].value = char(i + 'a');
            a[i].count = 0;
        }

        int ballons_count = 0;
        for (char c : s)
        {
            if (a[tolower(c) - 'a'].count == 0)
            {
                ballons_count += 2;
                a[tolower(c) - 'a'].count += 1;
            }
            else
            {
                ballons_count += 1;
            }
        }
        cout << ballons_count << endl;

        t--;
    }

    return 0;
}