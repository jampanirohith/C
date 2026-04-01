#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	//COnstructor
	Person(string n, int a) {
	  name = n;
	  age = a;
	}
	//Public method to display private data 
	void display() {
	   cout << "Name:" << name << ", Age:" << age << endl;
	}
	
};

int main() {
	Person p1("Alica", 25);
	//p1.name = "Bob"; //This would cause error; 'name' is private
	p1.display(); //Accessing a private data through a public method
	return 0;
}

