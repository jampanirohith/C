#include <iostream>
using namespace std;

class Parent{
	public:
	  void show1(int a) {
	    cout << "Parent: Integer argument="<<a<<endl;
	    
	   }
	
	void show2(double b) {
	    cout << "Parent: Double argument= " << b<<endl;
	   }
};

class Child : public Parent {
	public: 
	   void show3(string s) {
	   		cout << "Child: String argument =" << s << endl;
	   	}
};

int main() {
	Child obj;
	obj.show1(10);
	obj.show2(5.5);
	obj.show3("Hello");
return 0;
}
