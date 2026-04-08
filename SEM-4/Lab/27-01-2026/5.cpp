#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	
	vector<string> fruits = {"Apple","Banana","Mango"};
	
	for (string f: fruits)
	{
		cout << f << endl;
	}
	
	return 0;
}
