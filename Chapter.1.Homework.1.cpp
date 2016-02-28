/* File:   main.cpp
 * Author: Brandon Fins
 * Purpose: Problem 1
 * Created on February 28, 2016, 2:37 PM
 */

#include <iostream>

using namespace std;
int main() 
{
    //Number of Peas, Peas per Pod, Total Peas
    int NoP, PpP, TP;
    cout << "Press Enter after entering a number.\n";
    // User enters the number of total pods
    cout << "Enter the number of pods:\n";
    cin >> NoP;
    // User enters the number of peas per pod
    cout << "Enter the number of peas per pod:\n";
    cin >> PpP;
    // Multiply the number of pods and peas per pod to get total peas
    TP = NoP * PpP;
    // Give the user the total number of peas he has.
    cout << "If you have ";
    cout << NoP;
    cout << " pea pods\n";
    cout << "and ";
    cout << PpP;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << TP;
    cout << " peas in total.\n";
            return 0;
}

