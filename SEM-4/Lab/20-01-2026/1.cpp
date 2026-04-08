#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int rollno;
        string name;
        float marks;

    public:
        void getData()
        {
            cout << "Enter roll number:";
            cin >> rollno;

            cout << "Enter name: ";
            cin >> ws;
            getline(cin, name);

            cout << "Enter markks: ";
            cin >> marks;
        }
    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name:" << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.getData();

    return 0;
}