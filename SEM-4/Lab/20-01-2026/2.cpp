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
        void setData(int r, string n, float m)
        {
            rollno = r;
            name = n;
            marks = m;
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

    s1.setData(101, "Rahul", 85.5);
    s1.display();
    return 0;
}