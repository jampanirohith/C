//For finding time period of a pendulum
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float l, t;
	float pi=3.14, g=9.8;
	cout<<"Enter length of the pendulum(m): ";
	cin>>l;
	t=2*pi*sqrt(l/g);
	cout<<"Time period = "<<t<<" secomds\n";
	
	return 0;
}

