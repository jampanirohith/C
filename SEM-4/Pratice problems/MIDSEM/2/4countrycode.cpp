#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> countries;
    int code;
    string name;

    cout << "Enter 3 country details (Code Name):" << endl;
    for(int i=0; i<3; i++) {
        cin >> code >> name;
        countries[code] = name;
    }

    cout << "All Countries:" << endl;
    for(map<int, string>::iterator it = countries.begin(); it != countries.end(); ++it) {
        cout << "Code: " << it->first << ", Name: " << it->second << endl;
    }

    cout << "Enter code to search: ";
    cin >> code;
    if(countries.find(code) != countries.end()) 
        cout << "Found: " << countries[code] << endl;
    else 
        cout << "Not found" << endl;

    cout << "Enter code to delete: ";
    cin >> code;
    countries.erase(code);

    cout << "After Deletion:" << endl;
    for(auto pair : countries) {
        cout << "Code: " << pair.first << ", Name: " << pair.second << endl;
    }
    return 0;
}











































// Input:
// Enter 3 country details:
// Country 1 - Code: 91
// Country 1 - Name: India
// Country 2 - Code: 1
// Country 2 - Name: USA
// Country 3 - Code: 44
// Country 3 - Name: UK
// Enter country code to search: 91
// Enter country code to delete: 44

// Output:
// --- All Countries ---
// Code: 1, Name: USA
// Code: 44, Name: UK
// Code: 91, Name: India
// --- Search Result ---
// Country code 91 found: India
// --- After Deletion ---
// Country code 44 deleted successfully!
// --- All Countries After Deletion ---
// Code: 1, Name: USA
// Code: 91, Name: India