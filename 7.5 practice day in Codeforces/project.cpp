#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int bangla;
    int english;
    int math;

    int total;
    double avg;
    string gpa;
    int roll;
};
bool cmp(Student a, Student b)
{
    if (a.total == b.total)
    {
        return a.id < b.id;
    }
    else
    {
        return a.total > b.total;
    }
}

int main()
{
    int t;
    cin >> t;
    Student a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i].id >> a[i].name >> a[i].bangla >> a[i].english >> a[i].math;
        a[i].total = a[i].math + a[i].english + a[i].bangla;
        a[i].avg = (double)a[i].total / 3;

        if (a[i].avg >= 80)
        {
            a[i].gpa = "A+";
        }
        else if (a[i].avg >= 70)
        {
            a[i].gpa = "A";
        }
        else if (a[i].avg >= 60)
        {
            a[i].gpa = "A-";
        }
        else if (a[i].avg >= 50)
        {
            a[i].gpa = "B";
        }
        else if (a[i].avg >= 40)
        {
            a[i].gpa = "C";
        }
        else if (a[i].avg >= 33)
        {
            a[i].gpa = "D";
        }
        else
        {
            a[i].gpa = "Fail";
        }
    }
    sort(a, a + t, cmp);

    cout << "\n\nRoll\tID\tName\tBangla\tEnglish\tMath\tTotal\tAvg\tGPA\n";
    cout << "\n------------------------------------------------------------\n";
    for (int i = 0; i < t; i++)
    {
        cout << i + 1 << "\t" << a[i].id << "\t" << a[i].name << "\t" << a[i].bangla << "\t" << a[i].english << "\t" << a[i].math << "\t" << a[i].total << "\t" << setprecision(4) << a[i].avg << "%" << "\t" << a[i].gpa << endl;
    }

    return 0;
}