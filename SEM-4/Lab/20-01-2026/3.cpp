#include <iostream>
using namespace std;

class Person
{
    private:
        int age;

    public:
        void inputAge()
    {
        cin >> age;
    }
    void showAge()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person p;

    // p.age = 20;   /NOT ALLOWED

    p.inputAge();
    p.showAge();

    return 0;
}