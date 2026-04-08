#include <iostream>
#include <set>
using namespace std;

bool isSubset(set<char> main, set<char> sub) {
    for(char c : sub) {
        if(main.find(c) == main.end()) return false;
    }
    return true;
}

int main() {
    set<char> A, B;
    int n, m;
    char c;
    cout << "Size A: "; cin >> n;
    for(int i=0; i<n; i++) { cin >> c; A.insert(c); }
    cout << "Size B: "; cin >> m;
    for(int i=0; i<m; i++) { cin >> c; B.insert(c); }

    if(isSubset(A, B)) cout << "Set B is subset of A" << endl;
    else cout << "Set B is NOT subset of A" << endl;

    if(isSubset(B, A)) cout << "Set A is subset of B" << endl;
    else cout << "Set A is NOT subset of B" << endl;

    if(A == B) cout << "Sets are equal" << endl;
    else cout << "Sets are NOT equal" << endl;
    return 0;
}

















































// Input:
// Enter number of elements in Set A: 5
// Enter characters of Set A:
// a c e b d
// Enter number of elements in Set B: 3
// Enter characters of Set B:
// a c e

// Output:
// Set A: a b c d e
// Set B: a c e
// Set B is a subset of Set A
// Set A is NOT a subset of Set B
// Set A and Set B are NOT equal