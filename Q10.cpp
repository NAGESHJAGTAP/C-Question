// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example:
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3


#include <iostream>  
using namespace std;  
void countEvenOdd(int arr[], int size) {
    int evenCount = 0;  
    int oddCount = 0;   
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "Even: " << evenCount << ", Odd: " << oddCount << endl;
}
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);  
    countEvenOdd(nums, size);  
    return 0;  
}

