#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int cls;
    double cgpa;
    student(int roll, int cls, double cgpa)
    {
        this->cgpa = cgpa;
        this->cls = cls;
        this->roll = roll;
    }
};
student *fun()
{
    student kobir(5925, 11, 3.66);
    student *p = &kobir;
    return p;
}
int main()
{
    student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->cgpa << endl;

    return 0;
}