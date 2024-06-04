#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    // input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    // reverse using two pointer technic
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(a[i].s, a[j].s); // builtin fnc
        i++;
        j--;
    }
    // output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}