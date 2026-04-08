#include <iostream>
using namespace std;

template <typename T>
void convertLength(T meters) {
    cout << meters << " meters = " << (meters / 1000.0) << " kilometers" << endl;
}

template <typename T>
void convertTemperature(T celsius) {
    cout << celsius << " Celsius = " << ((celsius * 9.0/5.0) + 32) << " Fahrenheit" << endl;
}

template <typename T>
void convertWeight(T kilograms) {
    cout << kilograms << " kilograms = " << (kilograms * 1000) << " grams" << endl;
}

int main() {
    // Integer inputs
    convertLength(1500);
    convertTemperature(25);
    convertWeight(5);

    // Float inputs
    convertLength(1234.5);
    convertTemperature(36.6);
    convertWeight(2.75);
    return 0;
}






































// Input:
// Enter length in meters (Integer): 1500
// Enter temperature in Celsius (Integer): 25
// Enter weight in kilograms (Integer): 5
// Enter length in meters (Float): 1234.5
// Enter temperature in Celsius (Float): 36.6
// Enter weight in kilograms (Float): 2.75


// Output:
// === Integer Conversions ===
// 1500 meters = 1.5 kilometers
// 25 Celsius = 77 Fahrenheit
// 5 kilograms = 5000 grams
// === Float Conversions ===
// 1234.5 meters = 1.2345 kilometers
// 36.6 Celsius = 97.88 Fahrenheit
// 2.75 kilograms = 2750 grams