// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    // int cha = '9'
    if (x >= 48 && x <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (x >= 65 && x <= 90)
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}