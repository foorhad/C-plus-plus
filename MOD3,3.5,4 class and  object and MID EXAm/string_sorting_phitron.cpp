#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int freq[26] = {0};
    for (int i = 0; i < N; i++)
    {
        char x;
        cin >> x;
        freq[(int)x - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < freq[i]; j++)
        {
            cout << (char)(i + 'a');
        }
    }

    cout << endl;

    return 0;
}
