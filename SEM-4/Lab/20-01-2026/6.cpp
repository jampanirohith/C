//When a book object is created without details, default values are assigned
#include <iostream>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    float price;

public:
 Book()
    {
        bookId = 0;
        title = "Not Assigned";
        price = 0.0;
    }

void display() 
{
    cout << "Enter Book ID: " << bookId << "\n";
    cout << "Title: " << title << "\n";
    cout << "Price: " << price << endl;
}
};

int main() {
    Book b1;
    b1.display();
    return 0;
}