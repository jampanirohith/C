#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any alphabet:\n";
    cin>>ch;

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout<<ch<<" is a vowel\n";
            break;
        default:
            cout<<ch<<"is a consonent";
            break;
    }
    return 0;
}