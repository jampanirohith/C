#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> readings;
    int n;
    float temp, target;
    cout << "Enter number of readings: ";
    cin >> n;
    
    cout << "Enter sensor readings: ";
    for(int i=0; i<n; i++) {
        cin >> temp;
        readings.push_back(temp);
    }

    int idx = 0;
    for(vector<float>::iterator it = readings.begin(); it != readings.end(); ++it, ++idx) {
        cout << "Position " << idx << ": " << *it << endl;
    }

    cout << "Enter value to search: ";
    cin >> target;
    
    bool found = false;
    idx = 0;
    cout << "Found at positions: ";
    for(vector<float>::iterator it = readings.begin(); it != readings.end(); ++it, ++idx) {
        if(*it == target) {
            cout << idx << " ";
            found = true;
        }
    }
    if(!found) cout << "Not found";
    cout << endl;

    int pos;
    cout << "Enter position to insert: ";
    cin >> pos;
    cout << "Enter new reading: ";
    cin >> temp;
    
    vector<float>::iterator it = readings.begin();
    advance(it, pos);
    readings.insert(it, temp);

    cout << "Updated readings: ";
    for(it = readings.begin(); it != readings.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}







































// Input:
// Enter the number of readings: 6
// Enter sensor readings:
// 23.5 19.8 23.5 30.2 23.5 18.4
// Enter value to search: 23.5
// Enter position to insert new reading: 3
// Enter new reading value: 25.6


// Output:
// Position 0: 23.5
// Position 1: 19.8
// Position 2: 23.5
// Position 3: 30.2
// Position 4: 23.5
// Position 5: 18.4
// Value 23.5 found at positions: 0 2 4
// Updated readings: 23.5 19.8 23.5 25.6 30.2 23.5 18.4