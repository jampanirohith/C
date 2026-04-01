#include<iostream>
using namespace std;

class Parent {
private:
	int a;
protected:
	int b;
public:
	int c;
	Parent() {std:cout << "Parent Construction\n";}
};

class Child : public Parent {
private:
	int d;
public:
	Child() {std:: cout << "Child COnstruction\n";}
};

int main() {
	Child obj; 
	return 0;
}

