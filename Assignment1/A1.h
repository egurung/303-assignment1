#pragma once

int checkInt(int value, int* arr, int size);  
// Precondition: This function requires the value being checked,
// the array, and the size of the array
// Postcondition: This function returns the index of the value 
// in the array

int modifyInt(int value, int index, int* arr);
// Precondition: This function requires the desired new value,
// the index of the old value, and the array
// Postcondition: This function returns the old value (the one
// being modified)

void addInt(int value, int* &arr, int size); 
// Precondition: This function requires the value being added,
// the array, and the size of the array
// Postcondition: This function does not return anything, but 
// adds the value to the end of the array

void removeInt(int index, int* &arr, int size); 
// Precondition: This function requires the index of the removed
// value, the array, and the size of the array
// Postcondition: This function does not return anything, but 
// removes the value at the index given 