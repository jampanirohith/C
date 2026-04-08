#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> tasks;
    int choice, pos;
    string name;

    do {
        cout << "\n1.Add End 2.Add Begin 3.Insert Pos 4.Del End 5.Del Begin 6.Del Pos 7.Remove Name 8.Display 0.Exit: ";
        cin >> choice;
        if(choice == 1) { cin >> name; tasks.push_back(name); }
        else if(choice == 2) { cin >> name; tasks.push_front(name); }
        else if(choice == 3) {
            cin >> pos >> name;
            list<string>::iterator it = tasks.begin();
            advance(it, pos);
            tasks.insert(it, name);
        }
        else if(choice == 4) tasks.pop_back();
        else if(choice == 5) tasks.pop_front();
        else if(choice == 6) {
            cin >> pos;
            list<string>::iterator it = tasks.begin();
            advance(it, pos);
            tasks.erase(it);
        }
        else if(choice == 7) { cin >> name; tasks.remove(name); }
        else if(choice == 8) {
            for(list<string>::iterator it = tasks.begin(); it != tasks.end(); ++it) cout << *it << " ";
            cout << endl;
        }
    } while (choice != 0);
    return 0;
}















































//Input:
// ----- MENU -----
// 1. Add task at end
// 2. Add task at beginning
// 3. Insert task at position
// 4. Delete task from end
// 5. Delete task from beginning
// 6. Delete task by position
// 7. Remove task by name
// 8. Display all tasks
// 0. Exit
// ----------------

//Output:
// Enter your choice: 1
// Enter task name: Homework
// Enter your choice: 1
// Enter task name: Project
// Enter your choice: 2
// Enter task name: Meeting
// Enter your choice: 8
// Tasks: Meeting Homework Project
// Enter your choice: 6
// Enter position to delete: 2
// Task deleted using erase().
// Enter your choice: 8
// Tasks: Meeting Project
// Enter your choice: 7
// Enter task name to remove: Homework
// Task not found.
// Enter your choice: 8
// Tasks: Meeting Project
// Enter your choice: 0
// Exiting program.