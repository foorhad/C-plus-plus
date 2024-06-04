#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
    {
        if ((a + b) == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int ans = a + b;
            cout << ans;
        }
    }
    else if (s == '-')
    {
        if ((a - b) == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int ans = a - b;
            cout << ans;
        }
    }
    else
    {
        if ((a * b) == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int ans = a * b;
            cout << ans;
        }
    }

    return 0;
}