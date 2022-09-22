#include <iostream>
#include "A1.h"

using namespace std;

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

    int size2 = 10;
    for (int i = 0; i < size2; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

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

    int size3 = 11;
    for (int i = 0; i < size3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

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

    int size4 = 10;
    for (int i = 0; i < size4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}

