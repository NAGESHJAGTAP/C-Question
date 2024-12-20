// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array.
#include <iostream>  
using namespace std;  
void addElementToEnd(int arr[], int& size, int newElement) {
    arr[size] = newElement;  
    size++; 
    cout << "Updated array: ";  
    for (int i = 0; i < size; i++) {  
        cout << arr[i] << " ";  
    }
    cout << endl;  
}
int main() {
    int arr[6] = {1, 2, 3, 4, 5}; 
}