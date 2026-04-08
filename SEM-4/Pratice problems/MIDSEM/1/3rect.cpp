#include <iostream>
using namespace std;

template <typename T>
class Rectangle {
    T length, width;
public:
    void setDimensions(T l, T w) {
        length = l;
        width = w;
    }
    T getLength() { return length; }
    T getWidth() { return width; }
    T calculateArea() { return length * width; }
    T calculatePerimeter() { return 2 * (length + width); }
    
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
        if (length == width) cout << "Is Square? Yes" << endl;
        else cout << "Is Square? No" << endl;
    }
};

int main() {
    Rectangle<int> r1;
    r1.setDimensions(10, 5);
    r1.display();

    Rectangle<float> r2;
    r2.setDimensions(12.5, 12.5);
    r2.display();
    return 0;
}










































// Input:
// Enter length and width (Integer): 10 5
// Enter length and width (Float): 12.5 12.5
// Enter dimensions for Rectangle 1: 10 8
// Enter dimensions for Rectangle 2: 12 6

// Output:
// === Rectangle with Integer Dimensions ===
// Rectangle Details:
// Length: 10
// Width: 5
// Area: 50
// Perimeter: 30
// Is Square? No
// === Rectangle with Float Dimensions ===
// Rectangle Details:
// Length: 12.5
// Width: 12.5
// Area: 156.25
// Perimeter: 50
// Is Square? Yes
