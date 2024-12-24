// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.

// Approach 1: Brute Force

// #include <iostream>
// using namespace std;

// void countPositiveNegativeBruteForce(int arr[], int size) {
//     int positiveCount = 0; 
//     int negativeCount = 0; 
//     for (int i = 0; i < size; i++) { 
//    if (arr[i] > 0) {          
//    positiveCount++;
//   } else if (arr[i] < 0) {   
//    negativeCount++;
//         }
//     }
//     cout << "Positive count: " << positiveCount << endl;
//     cout << "Negative count: " << negativeCount << endl;
// }
// int main() {
//     int arr[] = {1, -2, 3, -4, 5, -6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     countPositiveNegativeBruteForce(arr, size);
//     return 0;
// }








// Approach 2: Easy (Using Single Loop with Counters)

// #include <iostream>
// using namespace std;
// void countPositiveNegativeEasy(int arr[], int size) {
//     int positiveCount = 0, negativeCount = 0;
//     for (int i = 0; i < size; i++) {
//         (arr[i] > 0) ? positiveCount++ : negativeCount++; 
//     }
//     cout << "Positive count: " << positiveCount << endl;
//     cout << "Negative count: " << negativeCount << endl;
// }
// int main() {
//     int arr[] = {1, -2, 3, -4, 5, -6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     countPositiveNegativeEasy(arr, size);
//     return 0;
// }











// Approach 3: Moderate (Separate Loops for Positive and Negative Counts)

// #include <iostream>
// using namespace std;
// void countPositiveNegativeModerate(int arr[], int size) {
//     int positiveCount = 0, negativeCount = 0;
//     for (int i = 0; i < size; i++) {
//   if (arr[i] > 0) {
//    positiveCount++;
//   }
//     }
//     for (int i = 0; i < size; i++) {
//    if (arr[i] < 0) {
//    negativeCount++;
//    }
//     }
//     cout << "Positive count: " << positiveCount << endl;
//     cout << "Negative count: " << negativeCount << endl;
// }
// int main() {
//     int arr[] = {1, -2, 3, -4, 5, -6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     countPositiveNegativeModerate(arr, size);
//     return 0;
// }









// Approach 4: Optimal Approach (Short-Circuit Evaluation)

// #include <iostream>
// using namespace std;

// void countPositiveNegativeOptimal(int arr[], int size) {
//     int positiveCount = 0, negativeCount = 0;

//   for (int i = 0; i < size; i++) {
//    if (arr[i] > 0) {
//   positiveCount++;  // Increment positive counter
//   } else {
//   negativeCount++;  // Increment negative counter
//    }
//     }

//   cout << "Positive count: " << positiveCount << endl;
//   cout << "Negative count: " << negativeCount << endl;
// }

// int main() {
//     int arr[] = {1, -2, 3, -4, 5, -6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     countPositiveNegativeOptimal(arr, size);

//     return 0;
// }












