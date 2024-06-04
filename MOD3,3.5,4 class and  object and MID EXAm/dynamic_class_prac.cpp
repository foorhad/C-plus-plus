#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[20];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 75;

    char c[] = "India";
    strcpy(dhoni->country, c);
    // cout << dhoni->jersey_no << " " << dhoni->country << endl;

    Cricketer *kohil = new Cricketer;
    *kohil = *dhoni; // directy copy dhoni to kohil

    // kohil->jersey_no = dhoni->jersey_no;    // manually copy
    // strcpy(kohil->country, dhoni->country); // manually copy

    delete dhoni;
    cout << "After the delete dhoni object" << endl;
    cout << kohil->jersey_no << " " << kohil->country << endl;

    return 0;
}