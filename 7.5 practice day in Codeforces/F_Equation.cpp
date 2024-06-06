#include <bits/stdc++.h>
using namespace std;

void multi(long long int x, long long int n)
{
    long long int y = 0;
    for (int i = 2; i <= n; i += 2)
    {
        double base = x, ex = i;
        y += int(pow(base, ex));
        cout << y << endl;
        // long long int term = 1;
        // for (int j = 1; j <= i; j++)
        // {
        //     term *= x;
        // }
        // y += term;
    }
    cout << y << endl;
}

int main()
{
    long long int x, n;
    cin >> x >> n;
    multi(x, n);

    return 0;
}