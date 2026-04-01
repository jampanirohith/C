#include <iostream>
using namespace std;
class Car { //Class is a prototype
public:
	string brand;
	int year;
	 
	//Constructor
	Car(string b, int y) {
	    brand = b;
	    year = y;
	}
	
	void display() {
	  cout << "Brand: " << brand;
	  cout << ", Year: " << year << endl;
	}
};

int main() {
 
    Car car1("Toyota", 2022);
    Car car2("Ford", 2019);
    Car car3("Honda", 2021);
    
	car1.display();
	car2.display();
	car3.display();
  return 0;
}    
