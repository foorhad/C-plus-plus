#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double marks;
    student(int roll, int cls, double marks)
    {
        this->roll = roll; //(*this).roll = roll
        this->cls = cls;
        this->marks = marks;
    }
};

int main()
{
    student forhad(56, 6, 3.56);
    student robi(59, 9, 3.93);
    cout << forhad.roll << " " << forhad.cls << " "
         << forhad.marks << endl;
    cout << robi.roll << " " << robi.cls << " "
         << robi.marks << endl;

    return 0;
}