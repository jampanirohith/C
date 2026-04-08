#include<iostream>
using namespace std;

template <class T>
class Number
{
    private:
        T num;

    public: 
        void setNum(T n)
        {
            num = n;
        }

        T getNum()
        {
            return num;
        }
};

int main()
{
        Number<int> n1;
        n1.setNum(10);
        cout << n1.getNum() << endl;

        Number<float> n2;
        n2.setNum(25.5);
        cout << n2.getNum() << endl;

        return 0;
}