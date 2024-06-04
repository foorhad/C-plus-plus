#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int age;
    int marks_math;
    int marks_physics;
    // constructor
    student(string name, int roll, int age, int marks_math, int marks_physics)
    {
        this->name = name;
        this->roll = roll;
        this->age = age;
        this->marks_math = marks_math;
        this->marks_physics = marks_physics;
    }
    // function
    void fnc()
    {
        cout << name << " " << roll << " " << age << " " << marks_math
             << " " << marks_physics << endl;
    }
    // function
    int total_marks()
    {
        return marks_math + marks_physics;
    }
};

int main()
{
    student person("forhad", 45, 19, 80, 90);
    // cout << per.name << " " << per.roll << " " << per.age << " " << per.marks_math
    //      << " " << per.marks_physics<<endl;
    person.fnc(); // access function
    cout << person.total_marks() << endl;

    return 0;
}