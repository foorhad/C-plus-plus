#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

int main()
{
    student *forhad = new student("Forhad", 369782);
    student *sojib = new student("Sojib", 369858);
    // forhad = sojib;  //didn't workd

    // forhad->name = sojib->name; //manual process
    // forhad->roll = sojib->roll;

    *forhad = *sojib;
    delete sojib;
    cout << forhad->name << " " << forhad->roll << endl;
    return 0;
}