#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    int *b = new int[3];
    // input
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;

    a = new int[5]; // inrese size
    // copy array from new array
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    delete[] b;
    a[3] = 66;
    a[4] = 77;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}