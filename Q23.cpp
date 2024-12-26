// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".
// Approach 1: Brute Force (Manual Concatenation)
// #include <iostream>
// using namespace std;
// string concatenateManual(string str1, string str2) {
//     for (int i = 0; i < str2.length(); i++) { 
//         str1 += str2[i]; 
//     }
//     return str1; 
// }
// int main() {
//     string str1 = "hello";  
//     string str2 = " world"; 
//     cout << "Concatenated String (Brute Force): " << concatenateManual(str1, str2) << endl;
//     return 0;
// }


// Approach 2: Using + Operator (Easy)
// #include <iostream>
// using namespace std;
// string concat(string str1, string str2) {
//     return str1 + str2; 
// }
// int main() {
//     string str1 = "hello";
//     string str2 = " world";
//     cout  << concat(str1, str2) << endl;
//     return 0;
// }



// Approach 3: Using append() Method (Moderate)
#include <iostream>
using namespace std;
string concatenateWithAppend(string str1, string str2) {
    str1.append(str2); 
    return str1; 
}
int main() {
    string str1 = "hello";
    string str2 = " world";
    cout << "Concatenated String (Using append()): " << concatenateWithAppend(str1, str2) << endl;
    return 0;
}