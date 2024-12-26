// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].

// 1. Brute Force Approach

#include <iostream>
using namespace std;

int findDifferenceBruteForce(int arr[], int size) {
    int maxElement = arr[0];
    int minElement = arr[0];
    for (int i = 1; i < size; i++) {
    if (arr[i] > maxElement) { 
  maxElement = arr[i];
        }
    }
    for (int i = 1; i < size; i++) {
    if (arr[i] < minElement) { 
     minElement = arr[i];
      }
    }
    return maxElement - minElement;
}
int main() {
    int arr[] = {80, 30, 70, 50, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Difference (Brute Force): " << findDifferenceBruteForce(arr, size) << endl;
    return 0;
}