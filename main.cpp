#include <iostream>
using namespace std;

struct Task {
    string description;
    bool is_completed;

    Task(const string& desc) {
        description = desc;
        is_completed = false;
    }
};

int main() {
    cout << "\n====C++ Todo Manager====" << endl;

    return 0;
}