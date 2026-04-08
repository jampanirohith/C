//without using function templates
#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

float add(float a, float b)
{
    return a+b;
}

int main()
{
    int x=10;
    int y=20;

    float a = 20.20;
    float b = 10.20;

    cout << add(x, y) << endl;
    cout << add(a, b) << endl;
    return 0;
 }