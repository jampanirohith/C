// C++ porgramme to count the number of digits in given number using while loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    int d;
    cout<<"Enter a number:\n";
    cin>>n;

    if(n==0)
    {
        d=1;
    }
    while(n!=0)
    {
        d++;
        n=n/10;
    }
    cout << "Number of digits:"<< d <<endl;
    return 0;
}