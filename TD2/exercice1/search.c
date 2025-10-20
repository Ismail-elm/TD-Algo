#include <math.h>
#include <stdio.h>
#include "search.h"
#include "utils.h"

int linear_search(int *arr, int n, int target)
{
    // linear search, return index of target
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    // return -1 if not found
    return -1;
}

int jump_search(int *arr, int n, int target)
{
    // jump search on sorted array, return index of target
    int step = sqrt(n);
    int prev = 0;
    int next = step;
    while (next < n && arr[next] < target) {
        prev += step ;
        next += step;
    }
    for (int i = prev; i < next && i < n; i++){
        if (arr[i] == target) {
            return i;
        }
    }
    // return -1 if not found
    return -1;
}

int binary_search(int *arr, int n, int target)
{
    // binary search on sorted array, return index of target
    int low = 0;
    int high = n-1;
    while (low <= high) {
        int mid = (high + low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (target < arr[mid]) {
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    // return -1 if not found
    return -1;
}