#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"
#include "output.h"

int main(void)
{
    // array example
    int n = 200;
    int arr[200] = {
        191, 192, 193, 194, 195, 196, 197, 198, 199, 200,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        121, 122, 123, 124, 125, 126, 127, 128, 129, 130,
        171, 172, 173, 174, 175, 176, 177, 178, 179, 180,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
        101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
        111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        141, 142, 143, 144, 145, 146, 147, 148, 149, 150,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        151, 152, 153, 154, 155, 156, 157, 158, 159, 160,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        161, 162, 163, 164, 165, 166, 167, 168, 169, 170,
        181, 182, 183, 184, 185, 186, 187, 188, 189, 190,
        131, 132, 133, 134, 135, 136, 137, 138, 139, 140,
    };

    // use sorting algorithms and compare runtime
    int *arr_copy = malloc(n * sizeof(int));

    // selection sort
    copy_array(arr, arr_copy, n);
    clock_t start1 = clock();
    selection_sort(arr_copy, n);
    clock_t end1 = clock();
    double time1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
    printf("Selection sort %s (%f seconds)\n", arrays_equal(expected_output, arr_copy, n) ? "valid" : "not valid", time1);
    
    // Insertion Sort
    copy_array(arr, arr_copy, n);
    clock_t start2 = clock();
    insertion_sort(arr_copy, n);
    clock_t end2 = clock();
    double time2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
    printf("Insertion sort %s (%f seconds)\n", arrays_equal(expected_output, arr_copy, n) ? "valid" : "not valid", time2);

    // Bubble Sort
    copy_array(arr, arr_copy, n);
    clock_t start3 = clock();
    bubble_sort(arr_copy, n);
    clock_t end3 = clock();
    double time3 = (double)(end3 - start3) / CLOCKS_PER_SEC;
    printf("Bubble sort %s (%f seconds)\n", arrays_equal(expected_output, arr_copy, n) ? "valid" : "not valid", time3);

    // Merge Sort
    copy_array(arr, arr_copy, n);
    clock_t start4 = clock();
    merge_sort(arr_copy, n);
    clock_t end4 = clock();
    double time4 = (double)(end4 - start4) / CLOCKS_PER_SEC;
    printf("Merge sort %s (%f seconds)\n", arrays_equal(expected_output, arr_copy, n) ? "valid" : "not valid", time4);

    // Quick Sort
    copy_array(arr, arr_copy, n);
    clock_t start5 = clock();
    quick_sort(arr_copy, n);
    clock_t end5 = clock();
    double time5 = (double)(end5 - start5) / CLOCKS_PER_SEC;
    printf("Quick sort %s (%f seconds)\n", arrays_equal(expected_output, arr_copy, n) ? "valid" : "not valid", time5);

    free(arr_copy);
    return 0;
}
