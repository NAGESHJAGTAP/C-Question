// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".

// Approach 1: Brute Force (Using ASCII Values)

// #include <iostream>
// using namespace std;
// string toUpperCaseASCII(string str) {
//     for (int i = 0; i < str.length(); i++) { 
//         if (str[i] >= 'a' && str[i] <= 'z') { 
//             str[i] = str[i] - 32; 
//         }
//     }
//     return str; 
// }
// int main() {
//     string input = "hello";
//     cout << "Uppercase (Brute Force): " << toUpperCaseASCII(input) << endl;
//     return 0;
// }






// Approach 2: Using the toupper() Function (Easy)

// #include <iostream>
// #include <cctype> 
// using namespace std;
// string toUpperCaseToupper(string str) {
//     for (int i = 0; i < str.length(); i++) {
//         str[i] = toupper(str[i]);
//     }
//     return str; 
// }
// int main() {
//     string input = "hello";
//     cout << "Uppercase (Using toupper): " << toUpperCaseToupper(input) << endl;
//     return 0;
// }





// Approach 3: Using STL Transform Function (Moderate)

#include <iostream>
#include <algorithm> 
#include <cctype>   
using namespace std;
string toUpperCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str; 
}
int main() {
    string input = "hello";
    cout << toUpperCase(input) << endl;
    return 0;
}







