#include <iostream>
#include <ctime>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main() {
    int arr[] = {5, 1, 4, 2, 8}; // Smallest example
    int n = sizeof(arr)/sizeof(arr[0]);

    clock_t start = clock();
    bubbleSort(arr, n);
    clock_t end = clock();

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    double time_taken = double(end - start) / CLOCKS_PER_SEC * 1000;
    cout << "\nTime taken: " << time_taken << " ms\n";

    return 0;
}
