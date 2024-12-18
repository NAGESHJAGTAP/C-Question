// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

#include <iostream> 
using namespace std;
void checkTriangleType(int side1, int side2, int side3) {
    if (side1 == side2 && side2 == side3) { 
        cout << "The triangle is equilateral." <<endl; 
    } else if (side1 == side2 || side2 == side3 || side1 == side3) { 
        cout << "The triangle is isosceles." <<endl; 
    } else { 
        cout << "The triangle is scalene." <<endl; 
    }
}
int main() {
    int side1, side2, side3; 
    cout << "Enter the first side of the triangle: "; 
    cin >> side1;
    cout << "Enter the second side of the triangle: ";
    std::cin >> side2; 

    cout << "Enter the third side of the triangle: "; 
    cin >> side3; 

    checkTriangleType(side1, side2, side3); 

    return 0; 
}