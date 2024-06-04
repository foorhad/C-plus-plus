#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "przogrammingzhezro";
    int indx = s.find("z");
    int cnt = 0;
    while (s.find("z") != -1)
    {
        s.replace(s.find("z"), 1, " ");
        cnt++;
    }
    cout << s << endl;
    cout << cnt << endl;
    return 0;
}