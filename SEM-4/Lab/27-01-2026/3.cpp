#include <iostream>
using namespace std;

template <class T>
class StatisticsCalculator 
{
   private:
    T num1, num2;

   public:
    StatisticsCalculator(T n1, T n2) 
    {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() 
    {
        cout << "Numbers: " << num1 << " and " << num2 << endl;

        cout << "Maximum:" << max(num1, num2) << endl;
        cout << "Maximum:" << min(num1, num2) << endl;
        cout << "Average:" << (num1+num2)/2  << endl;
    }
};

int main() {

    StatisticsCalculator<int> intStatCalc(10, 20);
    StatisticsCalculator<float> floatStatCalc(5.5, 8.2);

    cout << "Int results:" << endl;
    intStatCalc.displayResult();

    cout << endl << "Float results:" << endl;
    floatStatCalc.displayResult();

    return 0;
}
