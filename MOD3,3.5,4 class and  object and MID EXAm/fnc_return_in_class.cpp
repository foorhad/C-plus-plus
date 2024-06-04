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
student fnc()
{
    student rahim(4, 59, 4.90);
    return rahim;
}
int main()
{
    student ans = fnc();
    cout << ans.cls << " " << ans.roll << " " << ans.cgpa << endl;

    return 0;
}