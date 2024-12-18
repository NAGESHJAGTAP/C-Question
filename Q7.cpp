// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"


#include <iostream>  
#include <string>    
using namespace std;  
void trafficLightAction(string lightColor) {
    if (lightColor == "red") {
        cout << "Stop" << endl;  
    } else if (lightColor == "yellow") {
        cout << "Slow down" << endl;  
    } else if (lightColor == "green") {
        cout << "Go" << endl;  
    } else {
        cout << "Invalid input" << endl;
    }
}

int main() {
    string lightColor;
    cout << "Enter the traffic light color (red, yellow, green): ";
    cin >> lightColor; 
    trafficLightAction(lightColor);  

    return 0; 
}