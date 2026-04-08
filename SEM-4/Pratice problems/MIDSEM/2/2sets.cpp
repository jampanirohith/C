#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int> A, B, diff;
    int n, m, val;

    cout << "Size A: "; cin >> n;
    for(int i=0; i<n; i++) { cin >> val; A.insert(val); }
    cout << "Size B: "; cin >> m;
    for(int i=0; i<m; i++) { cin >> val; B.insert(val); }

    cout << "Only in A: ";
    for(auto x : A) {
        if(B.find(x) == B.end()) { cout << x << " "; diff.insert(x); }
    }
    cout << "\nOnly in B: ";
    for(auto x : B) {
        if(A.find(x) == A.end()) { cout << x << " "; diff.insert(x); }
    }
    cout << "\nCommon: ";
    for(auto x : A) {
        if(B.find(x) != B.end()) cout << x << " ";
    }
    
    cout << "\nSymmetric Difference: ";
    for(auto x : diff) cout << x << " ";
    return 0;
}





















































// Input:
// Enter number of elements in Set A: 5
// Enter elements of Set A:
// 1 2 3 4 5
// Enter number of elements in Set B: 4
// Enter elements of Set B:
// 3 4 6 7

// Output:
// Set A: 1 2 3 4 5
// Set B: 3 4 6 7
// Elements only in A: 1 2 5
// Elements only in B: 6 7
// Common elements: 3 4
// Symmetric Difference: 1 2 5 6 7