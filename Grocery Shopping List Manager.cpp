#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> grocery;
    string item;

    // 1. Input 5 grocery items
    for (int i = 0; i < 5; i++) {
        cin >> item;
        grocery.push_back(item);   // add()
    }

    // 2. Print 1st and 3rd items
    cout << grocery[0] << endl;    // get(0)
    cout << grocery[2] << endl;    // get(2)

    // Input for replacing 2nd item
    cin >> item;
    grocery[1] = item;             // set(1, item)

    // 4. Remove item at index 3
    grocery.erase(grocery.begin() + 3); // remove(3)

    // 5. Add a new item at the end
    cin >> item;
    grocery.push_back(item);       // add()

    // 6. Print final list
    cout << "[";
    for (int i = 0; i < grocery.size(); i++) {
        cout << grocery[i];
        if (i != grocery.size() - 1)
            cout << ", ";
    }
    cout << "]";

    return 0;
}
