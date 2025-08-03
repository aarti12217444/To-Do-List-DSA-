#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> todos;
    string cmd;
    while (cin >> cmd) {
        if (cmd == "add") {
            string task;
            cin >> task; // task without spaces; for spaces use getline with adjustment
            todos.push_back(task);
        } else if (cmd == "remove") {
            int idx;
            cin >> idx;
            if (idx >= 0 && idx < (int)todos.size()) {
                todos.erase(todos.begin() + idx);
            } else {
                cout << "Invalid index\n";
            }
        } else if (cmd == "display") {
            for (int i = 0; i < (int)todos.size(); i++) {
                cout << i << ": " << todos[i] << "\n";
            }
        } else if (cmd == "exit") {
            break;
        }
    }
    return 0;
}
