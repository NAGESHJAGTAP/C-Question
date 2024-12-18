// 2. Write a function to determine whether a given number is positive, negative, or zero.
#include <iostream> 
using namespace std;
void checkNumberSign(int number) {
    if (number > 0) { 
        cout << "The number is positive." << endl; 
    } else if (number < 0) { 
        cout << "The number is negative." << endl;
    } else { 
        cout << "The number is zero." << endl; 
    }
}

int main() {
    int number; 

    cout << "Enter a number: "; 
    cin >> number; 

    checkNumberSign(number); 

    return 0; 
}