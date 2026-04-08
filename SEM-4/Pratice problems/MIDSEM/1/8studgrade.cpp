#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> grades;
    vector<char> status;
    int n;
    char g;
    
    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter grades (A, B, C, D, F): ";
    for(int i=0; i<n; i++) {
        cin >> g;
        grades.push_back(g);
    }

    int countA=0, countB=0, countC=0, countD=0, countF=0;
    for(int i=0; i<grades.size(); i++) {
        if(grades[i] == 'A') countA++;
        else if(grades[i] == 'B') countB++;
        else if(grades[i] == 'C') countC++;
        else if(grades[i] == 'D') countD++;
        else if(grades[i] == 'F') countF++;
    }
    cout << "A: " << countA << ", B: " << countB << ", C: " << countC << ", D: " << countD << ", F: " << countF << endl;

    char removeG;
    cout << "Enter grade to remove: ";
    cin >> removeG;
    
    for(int i=0; i<grades.size(); i++) {
        if(grades[i] == removeG) {
            grades.erase(grades.begin() + i);
            i--; // Adjust index
        }
    }

    int pass = 0, fail = 0;
    for(int i=0; i<grades.size(); i++) {
        if(grades[i] == 'A' || grades[i] == 'B' || grades[i] == 'C') {
            status.push_back('P');
            pass++;
        } else {
            status.push_back('F');
            fail++;
        }
    }

    cout << "Pass/Fail status: ";
    for(int i=0; i<status.size(); i++) cout << status[i] << " ";
    cout << "\nTotal Pass: " << pass << "\nTotal Fail: " << fail << endl;
    return 0;
}








































//Input:
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