#include <bits/stdc++.h>
using namespace std;
int fun(int *p)
{
    // for (int i = 0; i < 5; i++)
    // {
    //     // cout << p[i] + 6 << " ";
    //     p[i] = i + 1;
    // }
    p[0] = 2;
    p[1] = 29;
    p[2] = 23;
    p[3] = 21;
    p[4] = 20;
}

int main()
{
    int *p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i]; //*(p+i)
    }
    fun(p);
    // cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}