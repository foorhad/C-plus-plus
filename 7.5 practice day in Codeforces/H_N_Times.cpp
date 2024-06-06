#include <bits/stdc++.h>
using namespace std;
void itr(int n, char c)
{
    while (n)
    {
        cout << c << " ";
        n--;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        char c;
        cin >> n >> c;
        itr(n, c);
        t--;
    }

    return 0;
}