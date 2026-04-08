#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float T;
	
	cout<<"Enter temperature: ";
	cin>>T;
	
	if(T<0)
		{
			cout<<"Solid(ice) \n";
		}
		
	else if(0<=T && T<100)
		{
			cout<<"Liquid(water) \n";
		}
	
	else if(T>=100)
		{
			cout<<"Gas(steam) \n";
		}
	
	else
	{
		cout<<"Invalid";
	}
	
	return 0;
	
}
