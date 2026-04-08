#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string line;
    cout << "Enter a sentence: ";
    getline(cin, line);

    vector<char> vec;
    for(int i=0; i<line.length(); i++) {
        vec.push_back(line[i]);
    }

    char target;
    cout << "Enter character to count: ";
    cin >> target;

    int freq = 0, alpha = 0, digit = 0;

    for(int i=0; i<vec.size(); i++) {
        char c = vec[i];
        if(c == target) freq++;
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) alpha++;
        if(c >= '0' && c <= '9') digit++;
        cout << c;
    }
    cout << endl;

    cout << "Frequency of '" << target << "': " << freq << endl;
    cout << "Alphabetic characters: " << alpha << endl;
    cout << "Digit characters: " << digit << endl;
    return 0;
}











































// Input:
// Enter a sentence: Happy New Year 2026
// Enter character to count: a

// Output:
// Characters in vector: H a p p y N e w Y e a r 2 0 2 6
// Frequency of 'a': 2
// Alphabetic characters: 14
// Digit characters: 4