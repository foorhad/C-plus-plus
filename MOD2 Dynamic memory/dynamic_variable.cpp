#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int;
    *p = 100;
    cout << *p;

    float *a = new float;
    *a = 25.6512;
    cout << endl
         << fixed << setprecision(3)
         << *a;

    return 0;
}