// 15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].

// Approach 1: Brute Force (Create a New Array)
// #include <iostream>
// using namespace std;
// void removeLastElementBruteForce(int arr[], int size) {
//     int newArr[size - 1];  
//     for (int i = 0; i < size - 1; i++) {
//         newArr[i] = arr[i];
//     }
//     for (int i = 0; i < size - 1; i++) {
//         cout << newArr[i] << " ";
//     }
//     cout << endl;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     removeLastElementBruteForce(arr, size);  
//     return 0;
// }








// Approach 2: Easy Approach (In-place Shifting of Elements)
#include <iostream>
using namespace std;
void removeLastElementEasy(int arr[], int &size) {
    if (size > 0) {
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    removeLastElementEasy(arr, size);  
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}