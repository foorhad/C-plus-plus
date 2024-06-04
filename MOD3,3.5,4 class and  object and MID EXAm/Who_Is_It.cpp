#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[100];
    char section;
    double total_marks;

    Student(int id, char name[100], char section, double total_marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int id_a;
        char name_a[100];
        char sec_a;
        double marks_a;
        cin >> id_a >> name_a >> sec_a >> marks_a;
        Student a(id_a, name_a, sec_a, marks_a);

        int id_b;
        char name_b[100];
        char sec_b;
        double marks_b;
        cin >> id_b >> name_b >> sec_b >> marks_b;
        Student b(id_b, name_b, sec_b, marks_b);

        int id_c;
        char name_c[100];
        char sec_c;
        double marks_c;
        cin >> id_c >> name_c >> sec_c >> marks_c;
        Student c(id_c, name_c, sec_c, marks_c);

        if (a.total_marks >= b.total_marks && a.total_marks >= c.total_marks)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
        }
        else if (b.total_marks >= a.total_marks && b.total_marks >= c.total_marks)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;
        }
        t--;
    }

    return 0;
}