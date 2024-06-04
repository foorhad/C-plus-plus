#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int a[5] = {2, 3, 4, 5, 6};
    return a;
}

int main()
{
    int *p = fun();
    cout << p;

    return 0;
}