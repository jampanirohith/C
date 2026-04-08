#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float x, A, v;
	
	cout<<"Enter position: ";
	cin>>x;
	cout<<"Enter amplitude: ";
	cin>>A;
	cout<<"Enter velocity: ";
	cin>>v;
	
	if(abs(x)==A && v==0)
		{
			cout<<"Maximum displacement \n";
		}
		
	else if(abs(x)==0)
		{
			cout<<"at equilibrium \n";
		}
	
	else if(abs(x)<A)
		{
			cout<<"in motion \n";
		}
	else
		{
			cout<<"Invalid state detected\n";
		}
		
	return 0;
	
}
