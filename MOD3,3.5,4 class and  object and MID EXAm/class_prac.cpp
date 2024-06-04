#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    double math_marks;
    int cls;

    // constructor
    Student(char name[100], int roll, char section, double math_marks, int cls)
    {
        // this->name[100] = name[100];
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student a("Forhad", 59, 'A', 900.6, 9);
    Student b("Karim", 60, 'B', 96.8, 9);
    Student c("Ratul", 61, 'A', 330.6, 9);

    // using builting function
    int maxi = max({a.math_marks, b.math_marks, c.math_marks});
    cout << maxi;

    // find manually
    //  if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    //  {
    //      cout << a.math_marks;
    //  }
    //  else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    //  {
    //      cout << b.math_marks;
    //  }
    //  else
    //  {
    //      cout << c.math_marks;
    //  }

    return 0;
}