#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int cls;
    int roll;
    double cgpa;
    student(int cls, int roll, double cgpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};
student *fnc()
{
    student *p = new student(46, 59, 4.901);
    return p;
}
int main()
{
    student *ans = fnc();
    cout << (*ans).cls << " " << (*ans).roll << " " << ans->cgpa << endl;
    delete ans;

    return 0;
}