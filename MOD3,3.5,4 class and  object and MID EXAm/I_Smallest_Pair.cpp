#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int mini = INT_MAX;
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int smallest = a[j] + a[k] + (k + 1) - (j + 1);
                mini = min(smallest, mini);
                // cout << a[j] << "+" << a[k] << "+" <<
                // (k + 1) << "-" << (j + 1) << endl;
            }
        }
        cout << mini << endl;
    }

    return 0;
}