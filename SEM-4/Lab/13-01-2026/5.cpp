// Write a c++ program to find the sum of geometrical series using for loop
// a + ar + ar^(2) + ar^(3)+......+ ar^(n-1)

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int first_term=2;
    int sum=0;
    int n=0;

    for(int i=1; i<=4; i++)
    {
        n = first_term*pow(3,i-1);
        sum = sum +n;
    }
    cout << "Factorial series sum:"<<sum<<endl;

    return 0;
}