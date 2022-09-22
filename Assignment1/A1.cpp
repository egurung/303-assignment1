#include <iostream>
#include "A1.h"

int checkInt(int value, int* arr, int size) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == value) {
            return i;
        }

    }

    return -1;
}

int modifyInt(int value, int index, int* arr) {

    int old = arr[index];

    arr[index] = value;

    return old;
}

void addInt(int value, int*& arr, int size) {

    int* arr2 = arr;

    arr = new int[size + 1];

    for (int i = 0; i < size; i++) {
        arr[i] = arr2[i];
    }

    arr[size] = value;

    delete[] arr2;
    arr2 = nullptr;


}

void removeInt(int index, int*& arr, int size) {

    int* arr2 = arr; // Copying location of original array

    arr = new int[size - 1]; // Pointing to location of new array

    int arrpos = 0;

    for (int i = 0; i < size; i++) {
        if (i != index) {
            arr[arrpos] = arr2[i];
            arrpos++;
        }

    }

    delete[] arr2;
    arr2 = nullptr; // Pointer is now pointing to nothing, clearing space 

}

