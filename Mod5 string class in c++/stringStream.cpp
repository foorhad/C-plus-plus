#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;

    int word_count = 0;
    while (ss >> word)
    {
        word_count++;
        cout << word << endl;
    }
    cout << word_count << endl;

    return 0;
}