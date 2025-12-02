#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string description;
    bool is_completed;

    Task(const string& desc, bool is_compltd = false) {
        description = desc;
        is_completed = is_compltd;
    }
};

int main() {
    string input;
    vector<Task> tasks;
    tasks.push_back(Task("Get a job", false));
    tasks.push_back(Task("Learn C#", false));
    cout << "\n====C++ TODO MANAGER====" << endl;
    cout << "Commands: list, exit" << endl;

    while (true) {
        cout << "> ";
        getline(cin, input);

        if (input.empty()) {
            continue;
        } else if (input == "list") {
            for (int i = 0; i < tasks.size(); i++) {
                cout << tasks[i].description << " -- " << (tasks[i].is_completed ? "Yes" : "No") << endl;
            }
        } else if (input == "exit") {
            break;
        } else {
            cout << "Invalid command!";
        }

        cout << endl;
    }

    return 0;
}