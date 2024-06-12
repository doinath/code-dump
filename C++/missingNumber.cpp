#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int *arr = new int[size];
    bool *present = new bool[size + 2](); // Initialize a boolean array of size+2 with false

    cout << "Enter " << size << " elements (between 1 and " << size + 1 << "):\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        present[arr[i]] = true; // Mark the presence of the number
    }

    cout << "The missing number is: ";
    for (int i = 1; i <= size + 1; i++) {
        if (!present[i]) { // Check which number is missing
            cout << i << endl;
            break;
        }
    }

    delete[] arr; // Free the dynamically allocated memory
    delete[] present; // Free the boolean array memory

    return 0;
}
