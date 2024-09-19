#include <iostream>
using namespace std;
void linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;}}
}}

int main() {
    cout<<"My name is Kamesh Singh"<<"\n";
    cout<<"Rollno. 50"<<"\n";
    int n, choice, key;

    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];  
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter key to search: ";
    cin >> key;

    cout << "1. Linear Search\n2. Binary Search\nEnter choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            
            linearSearch(arr, n, key);
            break;
        case 2:
            
            bubbleSort(arr, n);
            int result;
            result = binarySearch(arr, 0, n - 1, key);
            if (result == -1) {
                cout << "Element not found" << endl;
            } else {
                cout << "Element found at index " << result << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }return 0;}
