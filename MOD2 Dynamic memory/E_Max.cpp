#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (a[i] > max)
        // {
        //     max = a[i];
        // }
        maxi = max(maxi, a[i]);
    }
    cout << maxi;

    return 0;
}