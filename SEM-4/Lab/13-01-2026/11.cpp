#include <iostream>
#include <cmath>

using namespace std;

float computeArea(float r)
{
    return M_PI*r*r;
}

float computePerimeter(float r)
{
    return 2*M_PI*r;
}

int main()
{
    float radius;
    cout<<"Enter radius:";
    cin>>radius;

    cout <<"Area of circle is: "<< computeArea(radius) << endl;
    cout <<"Perimeter of circle is: "<< computePerimeter(radius) << endl;

    return 0;
}