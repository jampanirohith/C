#include <iostream>
using namespace std;

template <typename T>
class Counter {
    T count;
public:
    Counter(T start) : count(start) {}
    void increment() { count++; }
    void decrement() { count--; }
    void incrementBy(T val) { count += val; }
    void decrementBy(T val) { count -= val; }
    void reset() { count = 0; }
    void display() { cout << "Current count: " << count << endl; }
};

int main() {
    Counter<int> i(0);
    i.increment();
    i.incrementBy(5);
    i.decrement();
    i.display(); // Expected: 5

    Counter<float> f(10.5);
    f.increment();
    f.incrementBy(3.2);
    f.display(); // Expected: 14.7
    return 0;
}














































// Input:
// Enter initial value (Float): 10.5

// Output:
// === Integer Counter ===
// Initial count: 0
// After increment: 1
// After increment: 2
// After incrementing by 5: 7
// After decrement: 6
// After decrementing by 3: 3
// Current count: 3
// After reset: 0
// === Float Counter ===
// Initial count: 10.5
// After increment: 11.5
// After incrementing by 3.2: 14.7
// After decrement: 13.7
// After decrementing by 2.5: 11.2
// Current count: 11.2
// After reset: 0