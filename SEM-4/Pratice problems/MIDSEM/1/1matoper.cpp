#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T power(T base, int exp) {
    return pow(base, exp);
}

template <typename T>
T absolute(T val) {
    return abs(val);
}

template <typename T>
T percentage(T val, T percent) {
    return (val * percent) / 100;
}

int main() {
    // Integer Test
    int base = 5, exp = 3, num = -45, val = 200, per = 15;
    cout << base << " raised to power " << exp << " = " << power(base, exp) << endl;
    cout << "Absolute value of " << num << " = " << absolute(num) << endl;
    cout << per << "% of " << val << " = " << percentage(val, per) << endl;

    // Float Test
    float fbase = 2.5, fnum = -34.56, fval = 150.5, fper = 20;
    cout << fbase << " raised to power " << exp << " = " << power(fbase, exp) << endl;
    cout << "Absolute value of " << fnum << " = " << absolute(fnum) << endl;
    cout << fper << "% of " << fval << " = " << percentage(fval, fper) << endl;
    return 0;
}































//Input:
// Enter base and exponent (Integer): 5 3
// Enter a number (Integer): -45
// Enter value and percentage (Integer): 200 15
// Enter base and exponent (Float): 2.5 3
// Enter a number (Float): -34.56
// Enter value and percentage (Float): 150.5 20

// Output:
// === Integer Operations ===
// 5 raised to power 3 = 125
// Absolute value of -45 = 45
// 15% of 200 = 30
// === Float Operations ===
// 2.5 raised to power 3 = 15.625
// Absolute value of -34.56 = 34.56
// 20% of 150.5 = 30.1









