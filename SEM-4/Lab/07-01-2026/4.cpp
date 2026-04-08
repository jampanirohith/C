//Write a C++ program for calculating the range of a projectile
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float v, R, d, r;
	float g=9.8, pi=3.14;
	cout<<"Enter initial velocity(m/s): ";
	cin>>v;
	cout<<"Enter angle of projection(degrees): ";
	cin>>d;
	r=(d*pi)/180;
	R=(v*v*sin(2*r))/g;
	cout<<"Range of projectile = "<<R<<" meters\n";
	
	return 0;
}

