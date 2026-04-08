#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> names;
    int n;
    string temp;
    cout << "Number of names: ";
    cin >> n;
    for(int i=0; i<n; i++) { cin >> temp; names.push_back(temp); }

    string search;
    cout << "Name to search: ";
    cin >> search;
    int pos = 1;
    bool found = false;
    for(string name : names) {
        if(name == search) { cout << "Found at position: " << pos << endl; found = true; }
        pos++;
    }
    if(!found) cout << "Not found" << endl;

    char c;
    cout << "Character to filter: ";
    cin >> c;
    cout << "Names starting with " << c << ": ";
    for(string name : names) {
        if(name[0] == c) cout << name << " ";
    }
    cout << endl;

    names.pop_front();
    names.pop_back();
    
    cout << "Final list: ";
    for(string name : names) cout << name << " ";
    return 0;
}









































// Input:
// Number of names: 6
// Names: Alice Bob Charlie Anna David Amy
// Name to search: Charlie
// Character to filter by: A

// Output:
// Names: Alice Bob Charlie Anna David Amy
// Name 'Charlie' found at position: 3
// Names starting with 'A': Alice Anna Amy
// Final list after removing first and last: Bob Charlie Anna David