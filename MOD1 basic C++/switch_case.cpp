#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"two"<<endl;
            break;
        case 3:
            cout<<"three"<<endl;
            break;
        case 4:
            cout<<"four"<<endl;
            break;
        case 5:
            cout<<"five"<<endl;
            break;
        default:
            cout<<"wrong input"<<endl;
    }
    return 0;
}