// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

// 1. Brute Force Approach


#include <iostream>
using namespace std;
bool isSortedBruteForce(int arr[], int size) {
for (int i = 0; i < size - 1; i++) {  
 if (arr[i] > arr[i + 1]) {        
 return false;                  
}
}
return true; 
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool result = isSortedBruteForce(arr, size);
    if (result) {
   cout << "True" << endl;  
    } else {
           cout << "False" << endl;
    }
    return 0;
}