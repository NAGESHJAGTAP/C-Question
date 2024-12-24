// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50]. Output:[10,30,50]

// Approach 1: Brute Force

#include <iostream>
using namespace std;
void printEvenIndexBruteForce(int arr[], int size) {
cout << "[";
for (int i = 0; i < size; i++) { 
if (i % 2 == 0) {           
cout << arr[i];         
 if (i < size - 2) {    
 cout << ", ";
 }
 }
}
cout << "]" << endl;
}

int main() {
 int arr[] = {10, 20, 30, 40, 50};
 int size = sizeof(arr) / sizeof(arr[0]);
 printEvenIndexBruteForce(arr, size);
 return 0;
}