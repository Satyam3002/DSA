#include <iostream>
#include <algorithm> // Include the algorithm header for std::swap

void quicksort(int a[], int start, int end) {
    if (start >= end) {
        return;
    }
    int pivot = end;
    int i = start - 1;
    int j = start;

    while (j < pivot) {
        if (a[j] < a[pivot]) {
            i++;
            std::swap(a[i], a[j]); // Use std::swap from the STL
        }
        j++;
    }
    i++;
    std::swap(a[i], a[pivot]); // Use std::swap from the STL
    quicksort(a, start, i - 1);
    quicksort(a, i + 1, end);
}

int main() {
    const int size = 6;
    int arr[size] = {4, 2, 7, 1, 5, 3};

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quicksort(arr, 0, size - 1);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
