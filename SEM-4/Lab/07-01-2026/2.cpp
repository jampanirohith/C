//For finding KE of a body
#include<iostream>
using namespace std;

int main()
{
	float m, v, ke;
	cout<<"Enter mass of the body(kg): ";
	cin>>m;
	cout<<"Enter velocity of the body(m/s): ";
	cin>>v;
	ke=(m*v*v)/2;
	cout<<"Kinteic Energy = "<<ke<<" Joules\n";
	
	return 0;
}

