#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int;
    *p = 105;
    cout << *p << endl;
    delete p;
    cout << *p;
    return 0;
}