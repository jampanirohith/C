#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int n, val, low, high;
    cout << "Set size: ";
    cin >> n;
    cout << "Elements: ";
    for(int i=0; i<n; i++) { cin >> val; s.insert(val); }

    cout << "Low and High: ";
    cin >> low >> high;

    cout << "Elements in range: ";
    set<int>::iterator it = s.begin();
    while(it != s.end()) {
        if(*it >= low && *it <= high) {
            cout << *it << " ";
            s.erase(it++); // Erase and move to next
        } else {
            ++it;
        }
    }
    cout << endl;

    cout << "Set after removal: ";
    for(it = s.begin(); it != s.end(); ++it) cout << *it << " ";
    return 0;
}
























































// Input:
// Set size: 10
// Elements: 5 10 15 20 25 30 35 40 45 50
// Enter range to remove:
// Low: 20
// High: 40

// Output:
// Original set: 5 10 15 20 25 30 35 40 45 50
// Elements in range [20, 40]: 20 25 30 35 40
// Removing elements in range...
// Set after removal: 5 10 15 45 50