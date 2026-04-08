#include <iostream>

#include <list>
using namespace std;

int main() {
    list<int> temps;
    int n, t, minT, maxT;
    cout << "Number of days: ";
    cin >> n;
    cout << "Temperatures: ";
    for(int i=0; i<n; i++) {
        cin >> t;
        temps.push_back(t);
    }

    int freezing = 0;
    for(list<int>::iterator it = temps.begin(); it != temps.end(); ++it) {
        if(*it < 0) freezing++;
        cout << *it << " ";
    }
    cout << "\nBelow freezing: " << freezing << endl;

    temps.pop_front();
    temps.pop_back();

    cout << "Range to remove [min max]: ";
    cin >> minT >> maxT;

    list<int>::iterator it = temps.begin();
    while(it != temps.end()) {
        if(*it >= minT && *it <= maxT) {
            it = temps.erase(it);
        } else {
            ++it;
        }
    }

    cout << "Updated list: ";
    for(it = temps.begin(); it != temps.end(); ++it) cout << *it << " ";
    return 0;
}
















































// Input:
// Number of days: 7
// Temperatures: -5 12 8 -2 15 20 3
// Range to remove [min max]: 5 15

// Output:
// Temperatures recorded: -5 12 8 -2 15 20 3
// Temperatures below freezing: 2
// After front/back removal: 12 8 -2 15 20
// After range removal: -5 -2 20 3
// Total temperatures remaining: 4