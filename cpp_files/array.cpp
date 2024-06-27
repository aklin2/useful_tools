#include "array.h"
template <class ItemType>
void printArray(ItemType arr[], int length){
    std::cout << "[";
    for (int i=0; i < length - 1; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[length - 1] << "]" << std::endl;
}