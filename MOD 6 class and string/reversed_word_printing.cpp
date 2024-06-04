#include <bits/stdc++.h>
using namespace std;
void print(stringstream &s)
{
    string word;
    if (s >> word)
    {
        print(s);
        cout << word << endl;
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    return 0;
}