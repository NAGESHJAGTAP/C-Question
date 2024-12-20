// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

#include <iostream> 
using namespace std;  
bool containsNumber(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {  
            return true;         
        }
    }
    return false;  
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int target = 3; 
    if (containsNumber(arr, size, target)) {
        cout << "true" << endl; 
    } else {
        cout << "false" << endl;  
    }
    
    return 0; 
}