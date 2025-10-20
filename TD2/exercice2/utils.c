#include "utils.h"

void swap_int(int *a, int *b)
{
    // swap two elements
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

bool is_sorted_nondecreasing(int *arr, int n)
{
    // return true if array is sorted and false otherwise
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void copy_array(int *src, int *dst, int n)
{
    // copy array elements src into dst
    for (int i = 0; i < n; i++) {
        dst[i] = src[i];
    }
}


bool arrays_equal(int *arr1, int *arr2, int n) {
    // vérifie si deux tableaux sont égaux
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return false;  
        }
    }
    return true;  
}