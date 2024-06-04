#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *p = new int;
    cout << "func : " << p << endl;
    *p = 30;
    return p;
}
int main()
{
    int *x = fun();
    cout << "main : " << *x;
    return 0;
}