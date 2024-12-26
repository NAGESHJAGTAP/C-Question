// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".
// Approach 1: Brute Force (Manual Concatenation)
#include <iostream>
using namespace std;
string concatenateManual(string str1, string str2) {
    for (int i = 0; i < str2.length(); i++) { 
        str1 += str2[i]; 
    }
    return str1; 
}
int main() {
    string str1 = "hello";  
    string str2 = " world"; 
    cout << "Concatenated String (Brute Force): " << concatenateManual(str1, str2) << endl;
    return 0;
}