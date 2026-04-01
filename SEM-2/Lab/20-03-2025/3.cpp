#include<iostream>
using namespace std;

class Base {
public:
	virtual void show() {
	  std::cout << "Base show()\n";
	}
};

class Derived1 : public Base {
public: 
void show() override {
	std::cout << "Derived1 show()\n";
} 
};
 
class Derived2 : public Base {

};

int main() {
	Base* ptr1 = new Derived1();
	Base* ptr2 = new Derived2();
	
	std::cout << "Calling show() from Derived1 obejectnn";
	ptr1 ->show(); //Calls Derived1::show()
	
	std::cout<<"\nCalling show() from Derived2 object/n";
	ptr2 ->show(); //Calls Base::show () {inherited}

	return 0;
}

