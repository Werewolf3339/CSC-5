/* File:   main.cpp
 * Author: Brandon Fins
 * Purpose: Problem 6 (Projects 1)
 * Created on February 28, 2016, 2:37 PM
 */

#include <iostream>

using namespace std;
int main() 
{
    //This will be adding the integers together, and multiplying the integers.
    int Num1, Num2, Sum, Product;
    //Have the user input the numbers
    cout << "Hello user, enter the numbers that you wish me to add and multiply.\n";
    cin >> Num1;
    cin >> Num2;
    // Add and multiply the numbers
    Sum = Num1 + Num2;
    Product = Num1 * Num2;
    //Tell the user what he wants to know
    cout << "The sum of ";
    cout << Num1;
    cout << " and ";
    cout << Num2;
    cout << " is ";
    cout << Sum;
    cout << "\n";
    cout << "The product of ";
    cout << Num1;
    cout << " and ";
    cout << Num2;
    cout << " is ";
    cout << Product;
    cout << "\n";
    cout << "Next time use a calculator, it would have been a lot faster.\n";
                 return 0;
}
