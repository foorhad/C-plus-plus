#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a;
    char temp[] = "forhad";
    strcpy(a.name, temp);
    a.roll = 566;
    a.cgpa = 3.66;
    // cin >> a.name >> a.roll >> a.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa;

    return 0;
}