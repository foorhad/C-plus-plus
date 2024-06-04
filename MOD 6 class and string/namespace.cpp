#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    string name = "forhad";
    int age = 23;
    void hello()
    {
        cout << "Forhad namespace" << endl;
    }
};
namespace Tahera
{
    string name = "tahera";
    int age1 = 30;
    void hello()
    {
        cout << "tahera namespace design ghor" << endl;
    }
};
using namespace Rakib;
// using namespace Tahera;
int main()
{
    // cout << Rakib::age << " " << Rakib::name << " " << endl;
    // cout << Tahera::age1 << " " << Tahera::name << " " << endl;

    cout << age << endl;
    hello();

    cout << Tahera::age1 << endl;
    Tahera::hello();

    return 0;
}