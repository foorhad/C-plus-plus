#include <bits/stdc++.h>
using namespace std;
class custom_sort
{
public:
    char value;
    int count;
};
bool cmp(custom_sort a, custom_sort b)
{
    if (a.count == b.count)
    {
        return a.value < b.value;
    }
    else
    {
        return a.count > b.count;
    }
}

int main()
{
    string s;
    cin >> s;
    custom_sort a[26];

    /*[a,0][b,0][c,0][d,0][e,0][f,0][g,0][h,0][i,0][j,0][k,0][l,0]
    [m,0][n,0][o,0][p,0][q,0][r,0][s,0][t,0][u,0][v,0][w,0][x,0][y,0]
    [z,0]*/
    for (int i = 0; i < 26; i++)
    {
        a[i].value = char(i + 'a');
        a[i].count = 0;
    }
    //[z,4][b,2][a,4][d,0]
    for (char c : s)
    {
        // int ascii = int(c - 'a');
        // a[ascii].count++;
        a[c - 'a'].count++;
    }
    sort(a, a + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < a[i].count; j++)
        {
            cout << a[i].value;
        }
    }

    return 0;
}