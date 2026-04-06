#include <iostream>
using namespace std;

// Function to print array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;
}

// Bubble Sort (Ascending)
int bub(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                count++;
            }
        }

        if (!swapped) break;
    }
    return count;
}

// Bubble Sort (Descending)
int des(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                count++;
            }
        }

        if (!swapped) break;
    }
    return count;
}

int main() {
    cout << "BUBBLE_SORT_PROGRAM" << endl;

    int n;
    cout << "How many numbers do you want in the array?\n";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers one by one:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cout << "\nSelect option:\n";
    cout << "1. Sort in ascending order\n";
    cout << "2. Sort in descending order\n";
    cout << "3. Both\n";
    cin >> q;

    switch (q) {

        case 1: {
            int a = bub(arr, n);

            cout << "\nSorted array in ascending order:\n";
            printArray(arr, n);

            cout << "Number of swaps: " << a;
            break;
        }

        case 2: {
            int b = des(arr, n);

            cout << "\nSorted array in descending order:\n";
            printArray(arr, n);

            cout << "Number of swaps: " << b;
            break;
        }

        case 3: {
            // Copy original array
            int arr2[n];
            for(int i = 0; i < n; i++) {
                arr2[i] = arr[i];
            }

            int a = bub(arr, n);

            cout << "\nSorted array in ascending order:\n";
            printArray(arr, n);
            cout << "Number of swaps: " << a << endl;

            int b = des(arr2, n);

            cout << "\nSorted array in descending order:\n";
            printArray(arr2, n);
            cout << "Number of swaps: " << b;

            break;
        }

        default:
            cout << "Invalid choice!";
    }

    return 0;
}