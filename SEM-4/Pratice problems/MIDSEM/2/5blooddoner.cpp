#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<char, string> donors;
    int choice;
    char group;
    string name;

    do {
        cout << "\n1.Register 2.Find 3.Update 4.Remove 5.Display 6.Exit: ";
        cin >> choice;

        if(choice == 1) {
            cin >> group; getline(cin >> ws, name); // ws eats whitespace
            if(donors.count(group)) cout << "Group exists. Use update.";
            else donors[group] = name;
        }
        else if(choice == 2) {
            cin >> group;
            if(donors.count(group)) cout << "Donor: " << donors[group];
            else cout << "Not found";
        }
        else if(choice == 3) {
            cin >> group; getline(cin >> ws, name);
            donors[group] = name;
        }
        else if(choice == 4) {
            cin >> group;
            donors.erase(group);
        }
        else if(choice == 5) {
            for(auto p : donors) cout << "Group: " << p.first << ", Donor: " << p.second << endl;
        }
    } while(choice != 6);
    return 0;
}












































// Input:
// ----- MENU -----
// 1. Register a donor
// 2. Find donor for a blood group
// 3. Update donor for a blood group
// 4. Remove a donor
// 5. Display all blood groups and donors
// 6. Exit
// ----------------
// Enter your choice: 1
// Enter blood group (A, B, O): A
// Enter donor name: John Doe
// Donor registered successfully!
// Enter your choice: 1
// Enter blood group (A, B, O): B
// Enter donor name: Jane Smith
// Donor registered successfully!
// Enter your choice: 1
// Enter blood group (A, B, O): O
// Enter donor name: Mike Johnson
// Donor registered successfully!
// Enter your choice: 5
// --- All Blood Groups and Donors ---
// Blood Group: A, Donor: John Doe
// Blood Group: B, Donor: Jane Smith
// Blood Group: O, Donor: Mike Johnson
// Total blood groups registered: 3
// Enter your choice: 2
// Enter blood group to search: B
// Donor found!
// Blood Group: B, Donor: Jane Smith

// Output:
// Enter your choice: 1
// Enter blood group (A, B, O): B
// Enter donor name: Robert Brown
// Blood group 'B' already has a donor r
// Current donor: Jane Smith
// Use option 3 to update donor.
// Enter your choice: 3
// Enter blood group to update: A
// Enter new donor name: Alice Green
// Donor updated successfully!
// Enter your choice: 4
// Enter blood group to remove: O
// Donor removed successfully!
// Enter your choice: 5
// --- All Blood Groups and Donors ---
// Blood Group: A, Donor: Alice Green
// Blood Group: B, Donor: Jane Smith
// Total blood groups registered: 2
// Enter your choice: 6
// Exiting... Thank you!