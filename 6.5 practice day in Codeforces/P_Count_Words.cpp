#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    bool found = false;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (found == false)
            {
                count++;
                found = true;
            }
        }
        else
        {
            found = false;
        }
    }
    cout << count << endl;
    return 0;
}