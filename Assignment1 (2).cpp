#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    cout << "Reversed array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findSecondLargestSmallest(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) { // Simple sorting
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Second smallest: " << arr[1] << endl;
    cout << "Second largest: " << arr[size - 2] << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);
    findSecondLargestSmallest(arr, n);

    return 0;
}
