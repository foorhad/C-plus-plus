#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    // while (ss >> word)
    // {
    //     cout<<word << endl;
    // }
    int count = 0;
    for (; ss >> word; count++)
    {
    }
    cout << count << endl;
    return 0;
}