#include <iostream>
#include <fstream>

#include "A1.h"
using namespace std; 

int main() // The Driver Code 
{
    int* arr = new int[10];
    int size = 10;

    ifstream inFile; 
    inFile.open("test.txt"); // Opening the file

    
    // Putting the file info into an array
    if (inFile.is_open()) { 
        for (int i = 0; i < size; i++) {
            inFile >> arr[i];

        }
  
    }
    else { // Returns if the file can't be opened
        cout << "Error in input file" << endl;
        return 1;
    }

    inFile.close();

    char userInput;

    // User Menu 
    do {
        // Displays menu options 
        cout << "Array Control Center" << endl;
        cout << "C - Check Integer Position " << endl;
        cout << "M - Modify Value of Integer " << endl;
        cout << "A - Add Integer " << endl;
        cout << "R - Remove Integer " << endl;
        cout << "E - Exit" << endl;

        cout << endl;
        cout << "Please enter desired function (enter letter): ";
        cin >> userInput; // Geting User Input 

        switch (toupper(userInput)) {

        case 'C': { // Checking the array for an integer 

            int userInput;

            // Prompting the user
            cout << "Please enter what integer you want to check: ";

            cin >> userInput;

            // Outputs index
            cout << "The position is " << checkInt(userInput, arr, size) << endl;

            int size1 = 10;
            for (int i = 0; i < size1; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            break;
        }
        case 'M': // Modifying the integer 

            int valueUserInt;
            int posUser;

            // Prompting the user
            cout << "Please enter the new value: ";
            cin >> valueUserInt;
            cout << endl;
            cout << "Please enter the position of the integer you want to modify: ";
            cin >> posUser;
            cout << endl;

            // Outputs the new and old values
            cout << "The new value is " << valueUserInt << " and the old value was " << modifyInt(valueUserInt, posUser, arr) << endl;

            break;

        case 'A': // Adding an integer to an end

            int value;

            // Prompting the user
            cout << "Please enter the value you want to add: ";
            cin >> value;
            cout << endl;

            addInt(value, arr, size);

            break;

        case 'R': // Remove an integer from the array

            int index;

            // Prompting the user
            cout << "Please enter the position you want to remove: ";
            cin >> index;
            cout << endl;

            removeInt(index, arr, size);

            break;

        /* default: // don't display after E

            cout << "Please type in a valid function!" << endl;

            break;*/
        }


    } while (toupper(userInput) != 'E'); // Ending the program 

    return 0;
}

