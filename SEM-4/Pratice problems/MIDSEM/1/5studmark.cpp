#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;
    int n, temp, pos;
    cout << "Enter number of students: ";
    cin >> n;
    
    cout << "Enter marks: ";
    for(int i=0; i<n; i++) {
        cin >> temp;
        marks.push_back(temp);
    }

    cout << "Enter mark to insert: ";
    cin >> temp;
    cout << "Enter position to insert: ";
    cin >> pos;
    
    vector<int>::iterator it = marks.begin();
    advance(it, pos);
    marks.insert(it, temp);

    cout << "Enter position to delete: ";
    cin >> pos;
    it = marks.begin();
    advance(it, pos);
    marks.erase(it);

    marks.pop_back(); // Remove last

    cout << "Final marks: ";
    for(it = marks.begin(); it != marks.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}























































// Input:
// Enter number of students: 5
// Enter marks:
// 70 85 90 60 75
// Enter a mark to insert: 88
// Enter position to insert: 2
// Enter position to delete: 3

// Output:
// Marks entered:
// 70 85 90 60 75
// After inserting:
// 70 85 88 90 60 75
// After deleting last mark:
// 70 85 88 90 60
// Final marks:
// 70 85 88 60