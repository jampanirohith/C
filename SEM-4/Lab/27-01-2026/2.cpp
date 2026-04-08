#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a+b;
};

template <typename T>
T sub(T a, T b)
{
    return a-b;
};

template <typename T>
T mul(T a, T b)
{
    return a*b;
};

template <typename T>
T div(T a, T b)
{
    return a/b;
};

int main()
{
    int num1, num2;
    std::cout << "Calculator:\n" << endl;
    std::cout << "Enter first digit:\n" << endl;
    cin >> num1;
    std::cout << "Enter second digit:\n" << endl;
    cin >> num2;

    cout << "INT results:\nNumbers:"<< num1 << " and " << num2 << endl;
    cout << num1 << "+" << num2 << "=" << add<int>(num1, num2) << "\n" << endl;
    cout << num1 << "-" << num2 << "=" << sub<int>(num1, num2) << "\n" << endl;
    cout << num1 << "*" << num2 << "=" << mul<int>(num1, num2) << "\n" << endl;
    cout << num1 << "/" << num2 << "=" << div<int>(num1, num2) << "\n" << endl;
    

    cout << "Float results:\nNumbers:"<< num1 << " and " << num2 << endl;
    cout << num1 << "+" << num2 << "=" << add<float>(num1, num2) << "\n" << endl;
    cout << num1 << "-" << num2 << "=" << sub<float>(num1, num2) << "\n" << endl;
    cout << num1 << "*" << num2 << "=" << mul<float>(num1, num2) << "\n" << endl;
    cout << num1 << "/" << num2 << "=" << div<float>(num1, num2) << "\n" << endl;
    
    return 0;
}