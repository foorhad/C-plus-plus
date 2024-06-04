#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char x;
    cin>>x;
    switch(tolower(x))
    {
        case 'a': //if(x=='a')
            cout<<"vowel"<<endl;
            break;
        case 'e':
            cout<<"vowel"<<endl;
            break;
        case 'i':
            cout<<"vowel"<<endl;
            break;
        case 'o':
            cout<<"vowel"<<endl;
            break;
        case 'u':
            cout<<"vowel"<<endl;
            break;
        default :
            cout<<"consonent"<<endl;
        
    }
    return 0;
}