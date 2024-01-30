#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    // Create an array of strings
    string strs[] = {"flower", "flow", "flight"};

    // Determine the size of the array
    int size = sizeof(strs) / sizeof(strs[0]);

    // Loop through the array and print each string
    for (int i = 0; i < size; i++) {
        sort(strs[i].begin(), strs[i].end());
        cout << strs[i] << endl;

    }

    return 0;
}
