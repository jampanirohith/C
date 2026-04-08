#include<iostream>
using namespace std;

int main()
{
	char x='B';
	
	switch(x) {
	case 'A':
		cout<<"Choice is A\n";
		break;
	case'B':
		cout<<"Choice is B\n";
		break;
	case 'C':
		cout<<"Choice is C\n";
		break;
	default:
		cout<<"Choice oyher than A, B and C\n";
		break;
	}
	
	return 0;
}
	
