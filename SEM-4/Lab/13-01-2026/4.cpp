// Write a c++ program to find the sum of factorial series using for loop
// 1! + 2!+ 3! + 4! +....+n!

#include <iostream>
using namespace std;

int main()
{
    int n=1;
    int f=1, sum=0;

    cout<<"Number of terms:";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        f = f*i;
        sum = sum +f;
    }
    cout << "Factorial series sum:"<<sum<<endl;

    return 0;
}