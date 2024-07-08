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
template<class ItemType>
void printArray(ItemType arr[], int length);

/**
 * @brief Checks if a given item is present in an array.
 *
 * This function iterates through the array and checks if the specified item
 * is present in the array. If the item is found, the function returns true,
 * otherwise, it returns false.
 *
 * @tparam ItemType The type of the items in the array.
 * @param item The item to search for in the array.
 * @param array A pointer to the array to search within.
 * @param size The number of elements in the array.
 * @return true If the item is found in the array.
 * @return false If the item is not found in the array.
 */
template<class ItemType>
bool isInArray(ItemType item, ItemType arr[], int size);

#include "array.cpp"
#endif