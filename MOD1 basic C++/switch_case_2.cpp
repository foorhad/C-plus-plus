#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    switch(x%2)
    {
        case 0:
            cout<<"Even"<<endl;
            break;
        default:
            cout<<"ODD"<<endl;
    }
    return 0;
}