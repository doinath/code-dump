#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int *arr = new int[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int curr_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < size; i++) {
        // Choose between current element or sum with previous
        curr_sum = max(arr[i], curr_sum + arr[i]);
        // Update max_sum if current sum is higher
        max_sum = max(max_sum, curr_sum);
    }

    cout << "The maximum sum of contiguous subarray is: " << max_sum << endl;

    delete[] arr; // Free the dynamically allocated memory

    return 0;
}
