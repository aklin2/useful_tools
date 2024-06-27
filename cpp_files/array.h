#ifndef ARRAY_PRINT
#define ARRAY_PRINT

/** Prints out an array. 
 * @example
 *     int arr[5] = {1, 2, 3, 4, 5};
 *     printArray<int>(arr, 5);
 * @pre  provide an array and specify type and its length.
 * @post None.
 * @param arr  an array.
 * @param length  the total number of items in the array.
 * */ 

template <class ItemType>
void printArray(ItemType arr[], int length);
#include "array.cpp"
#endif