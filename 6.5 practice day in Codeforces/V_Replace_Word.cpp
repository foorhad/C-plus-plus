#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string f = "EGYPT";

    while (s.find("EGYPT") != -1)
    {
        s.replace(s.find("EGYPT"), f.size(), " ");
    }
    // cout << s;

    return 0;
}