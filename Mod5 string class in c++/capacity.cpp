#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* function of size() and max() function
    ================================*/

    //  string s = "hello this is shayan";
    //  cout << s.size() << endl;
    //  cout << s.max_size() << endl;

    // function of capacity() and size() function
    //  string s1 = "fforhadfdfforhadfdfforhadfd";
    //  cout << s1.capacity() << endl;
    //  s1 = "aaaaaaaaaaaaaaaaaaaaaaaaggggggghgghfghpf";
    //  cout << s1.capacity() << endl;
    //  cout << s1.size() << endl;

    // function of clear() function
    //  string s3 = "this is kolih";
    //  cout << s3 << endl;
    //  s3.clear();
    //  cout << s3 << endl;
    //  cout << s3.size() << endl;

    // function of emty() function
    // string s4 = "forhad";
    // s.clear();
    // if (s4.empty() == true) // s4.size == 0
    //     cout << "empty" << endl;
    // else
    //     cout << "Not empty" << endl;

    // function of resize() function
    string s5;
    cin >> s5;
    // // s5.resize(5);
    // s5.resize(20, 'm');
    // cout << s5 << endl;
    cout << s5.size() << endl;
    s5.resize(5);
    s5.resize(8, 'm');
    cout << s5 << endl;

    return 0;
}