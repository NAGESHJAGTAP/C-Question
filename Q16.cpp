// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.
// Approach 1: Brute Force
#include <iostream>
using namespace std;

bool areAllPositiveBruteForce(int arr[], int size) {
    for (int i = 0; i < size; i++) { 
        if (arr[i] <= 0) {          
            return false;            
        }
    }
    return true;                     
}
int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (areAllPositiveBruteForce(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}