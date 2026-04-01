#include <iostream>
using namespace std;

class  Complex {
private: 
	float real, imag;
public:
	Complex(float r, float i) {
		real = r; 
		imag = i;
	}
	Complex operator+(Complex c){
		return Complex(real + c.real, imag + c.imag);
	}
	Complex operator-(Complex c) {
		return Complex(real - c.real, imag - c.imag);
	}
	Complex operator*(Complex c) {
		return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
	}
	void display() {
		cout << real << "+" << imag << "i" << endl;
	}
};

int main() {
	Complex c1(3, 2), c2(1, 7);
	Complex sum = c1 + c2;
	Complex diff = c1 - c2;
	Complex prod = c1 * c2;
	cout << "Sum: ";
	sum.display();
	cout << "Difference: "; 
	diff.display();
	cout << "Product: "; 
	prod.display();
return 0;
}
