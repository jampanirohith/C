#include<iostream>
using namespace std;

int main()
{
    char x='A';
    
    switch (x) {
        case 'A':
            cout << "choice is A\n";
            break;
        case 'B':
            cout << "choice is B\n";
            break;
        case 'C':
            cout << "choice is C\n";
            break;
        default:
            cout<< "Choice other than A, B and C\n";
            break;
    }
    return 0;
}