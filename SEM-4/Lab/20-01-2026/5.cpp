#include <iostream>
#include <string>
using namespace std;

class Smartphone
{
private:
    string brand;
    string model;
    float price;

public:
    void input();
    void display();
};

void Smartphone :: input() 
{
    cout << "Enter Brand: ";
    cin >> brand;
    cout << "Enter Model: ";
    cin >> model;
    cout << "Enter Price: ";
    cin >> price;
}


void Smartphone :: display() {
    cout << "\nSmartPhone Details:\n";
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
}

int main() {
    Smartphone s;
    s.input();
    s.display();
    return 0;
}