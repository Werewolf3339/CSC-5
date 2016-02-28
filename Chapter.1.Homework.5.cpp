/* File:   main.cpp
 * Author: Brandon Fins
 * Purpose: Problem 5
 * Created on February 28, 2016, 2:37 PM
 */

#include <iostream>

using namespace std;
int main() 
{
    //Width of Area, Length of Area, Length of Fence
    int WoA, LoA, LoF;
    cout << "Hello User.\n";
    cout << "Press Enter after entering a number.\n";
    // User enters the width of area in feet
    cout << "Enter the width of the area, in feet:\n";
    cin >> WoA;
    // User enters the length of area
    cout << "Enter the length of the area, in feet:\n";
    cin >> LoA;
    // Multiply the width and length to get how much fence will be needed
    LoF = 2 * LoA + 2 * WoA;
    // Give the user the number of feet of fence he will need
    cout << "If the area is ";
    cout << WoA;
    cout << " feet wide\n";
    cout << "and ";
    cout << LoA;
    cout << " feet long, then\n";
    cout << "you need ";
    cout << LoF;
    cout << " feet of fencing to enclose the area.\n";
    cout << "Goodbye.\n";
            return 0;
}