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
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};
int main()
{
    student *abdullah = new student(592665, 5, 3.65);
    cout << (*abdullah).roll << " " << (*abdullah).cls << " " << (*abdullah).cgpa << endl;

    return 0;
}