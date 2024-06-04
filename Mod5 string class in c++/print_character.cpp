#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        for (char c : word)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}