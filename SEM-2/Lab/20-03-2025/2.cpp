#include<iostream>
using namespace std;

class Parent {
public:
	int publicVar;
protected:
	int protectedVar;
private:
	int privateVar;
public:
	Parent(int pub, int prot, int priv){
	publicVar = pub ; protectedVar = prot; 
	privateVar = priv;
}

void displayParent() {
	cout << publicVar << protectedVar << ",PrivatstereVar: (Not Accesible)" << endl;
} };
 
class Child : public Parent {
	public :
	Child(int pub, int prot, int priv):
Parent(pub, prot, priv) {}

void displayChild() {
	cout << "Child Class - PublicVar:" << publicVar << ",ProtectedVar:" << protectedVar <<  endl; }
	
};

int main() {
	Child obj(10, 20, 30);
	obj.displayParent(); 
	obj.displayChild(); 
	cout << obj.publicVar << endl;

	return 0;
}

