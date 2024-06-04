#include <bits/stdc++.h>
using namespace std;

int main()
{
    // funtion of append()
    // string a = "Mohammad";
    // string b = " Abdullah Forhad";
    // // a = a +       -> works
    // // a += b;       ->works
    // a.append(b);
    // cout << a << endl;

    // function of pushback()
    // string a = "Apple";
    // cout << "size: " << a.size() << endl;
    // // a = a + 'w';
    // // a[5] = 'w'; ->didn't work
    // a.push_back('M'); // added character in back
    // a.pop_back();     // delete character in back
    // a.pop_back();
    // cout << a << endl;

    // function of assign(), erase(), replace()
    string a = "palestine";
    // a = "Forhad";
    // a.assign("forhad");  /*a="forhad" and a.assign("forhad")
    //                                 both are same*/

    a.erase(4, 2); // 1st parameter(4) starting 2nd parameter length(2)
    // a.replace(4, 0, "for");
    // a.insert(4, "forhad");
    cout << a << endl;

    return 0;
}