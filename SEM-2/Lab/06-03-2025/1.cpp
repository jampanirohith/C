#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	int unique_id;
	string name;
	int age;
	string city;
	string gender;
	
public:
   //Default constructor(NO PARAMETER)
   Person() {
	unique_id = 0;
	name = "Unknown";
	age = 0;
	city = "Not assigned";
	gender = "Not specified";
}

//Method Declaration
void displayInfo();
};

void Person::displayInfo() {
   cout << "ID:" << unique_id << "\nName: "<< name << "\nAge:" << age << "\nCity:" << city << "\nGender:" <<gender << endl;
   cout << "----------------------------" << endl;
}


int main() {
	//Creating two objects using the default constructor
	Person person1;
	Person person2;

	//Displaying their default information
	cout << "Person 1 Info:" << endl;
	person1.displayInfo();

	cout << "Person 2 Info:" << endl;
	person2.displayInfo();

  return 0;
}
