#include <iostream>
using namespace std;

// Function forward declaration
void solve(int arr[], int size);

int main() {
    int n = 3;
    int arr[n] = {1, 5, 6};
    solve(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

// Define the solve function with a return type
void solve(int arr[], int size) {
    arr[0] = 100;
}

