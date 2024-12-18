// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.

#include <iostream> 
using namespace std;
bool isEligibleToVote(int age) {
    if (age >= 18) {
        return true; 
    } else {
        return false; 
    }
}

int main() {
    int age; 
    cout << "Enter your age: ";
    cin >> age;
    if (isEligibleToVote(age)) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}