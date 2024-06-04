#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    cout << maxi << " " << mini << endl;

    // swap
    swap(a, b);
    cout << "a : " << a << " b : " << b;

    return 0;
}
