// 22. Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

// Approach 1: Brute Force (Manual Count)

// #include <iostream>
// #include <string>
// using namespace std;

// int findlength(string str) { 
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++) { 
//         count++;
//     }
//     return count;
// }

// int main() {
//     string input = "hello world!";
//     cout << findlength(input) << endl; 
//     return 0;
// }



// Approach 2: Using size() or length() Method (Easy)

// # include <iostream>
// # include <string>
// using namespace std;
// int findlength(string str){
//   return str.length();
// }
// int main(){
//     string input="hello world!";
//     cout << findlength(input) << endl;
//     return 0;
// }




// Approach 3: Using a Pointer (Moderate)
// #include <iostream>
// using namespace std;

// int findLengthPointer(string str) {
//     const char* ptr = str.c_str(); 
//     int count = 0;
//     while (*ptr != '\0') { 
//         count++; 
//         ptr++; 
//     }
//     return count;
// }
// int main() {
//     string inputString = "Hello, World!";
//     cout << "Length (Using Pointer): " << findLengthPointer(inputString) << endl;
//     return 0;
// }




// Approach 4: Using std::distance with Iterators (Optimal)

#include <iostream>
#include <iterator> 
using namespace std;

int findLengthIterators(string str) {
    return distance(str.begin(), str.end()); 
}
int main() {
    string inputString = "Hello, World!";
    cout << "Length (Using Iterators): " << findLengthIterators(inputString) << endl;
    return 0;
}