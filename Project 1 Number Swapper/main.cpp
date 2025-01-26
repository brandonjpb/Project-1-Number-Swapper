// This program takes two numbers and swaps their positions

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    int valOne, valTwo, temp;

    // Get user input
    cout << "Enter two values separated by a space: \n";
    cin >> valOne >> valTwo;

    // Swap values
    // Note: it would be cleaner to display the values in reverse order
    // However, this does not adhere to the requirements of the program as stated
    temp = valOne;
    valOne = valTwo;
    valTwo = temp;

    // Display swapped values
    cout << "The values are: " << valOne << " " << valTwo << " when swapped.\n";
    return 0;
}