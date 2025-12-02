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
    vector<Task> tasks;
    tasks.push_back(Task("Get a job", false));
    tasks.push_back(Task("Learn C#", false));
    cout << "\n====C++ TODO MANAGER====" << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << tasks[i].description << " -- " << (tasks[i].is_completed ? "Yes" : "No") << endl;
    }

    return 0;
}