// 8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5];-
#include <iostream>  
using namespace std;  
double findAverage(int arr[], int size) {
    int sum = 0;  
    for (int i = 0; i < size; i++) {
        sum += arr[i];  
    }
    return static_cast<double>(sum) / size;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);  
    double average = findAverage(arr, size);  
    cout << "The average of the array is: " << average << endl;
    return 0; 
}