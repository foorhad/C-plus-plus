#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even = 0, odd = 0;

        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (n % 2 == 0)
        {
            int op = abs(even - odd) / 2;
            cout << op << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}