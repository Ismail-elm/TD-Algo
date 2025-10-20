#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search.h"
#include "utils.h"

int main(void)
{
    int n = 200;
    int target = 100;
    
    // array exemple
    int arr[200] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
        41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
        51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
        61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
        71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
        81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
        91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
        101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
        111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
        121, 122, 123, 124, 125, 126, 127, 128, 129, 130,
        131, 132, 133, 134, 135, 136, 137, 138, 139, 140,
        141, 142, 143, 144, 145, 146, 147, 148, 149, 150,
        151, 152, 153, 154, 155, 156, 157, 158, 159, 160,
        161, 162, 163, 164, 165, 166, 167, 168, 169, 170,
        171, 172, 173, 174, 175, 176, 177, 178, 179, 180,
        181, 182, 183, 184, 185, 186, 187, 188, 189, 190,
        191, 192, 193, 194, 195, 196, 197, 198, 199, 200
    };

    // searching algorithms and comparing runtime
    // if not sorted
    // linear search
    if (!is_sorted_nondecreasing(arr, n)) {
        printf("Array is not sorted!\n");
        clock_t start1 = clock();
        int search_1 = linear_search(arr, n, target);
        clock_t end1 = clock();
        double time1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
        if (search_1 == -1) {
            printf("-Target not found\n");
            printf("%f seconds\n", time1);
        }
        else {
        printf("-Linear search found target at index %d\n", search_1);
        printf("%f seconds\n", time1);
        }
    }
        // if sorted
    else {
        // jump search
        printf("Array is sorted!\n");
        clock_t start2 = clock();
        int search_2 = jump_search(arr, n, target);
        clock_t end2 = clock();
        double time2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
        if (search_2 == -1) {
            printf("-Target not found\n");
            printf("%f seconds\n", time2);
        }
        else {
        printf("-Jump search found target at index %d\n", search_2);
        printf("%f seconds\n", time2);
        }

        // binary search
        clock_t start3 = clock();
        int search_3 = binary_search(arr, n, target);
        clock_t end3 = clock();
        double time3 = (double)(end3 - start3) / CLOCKS_PER_SEC;
        if (search_3 == -1) {
            printf("-Target not found\n");
            printf("%f seconds\n", time3);
        }
        else {
        printf("-Binary search found target at index %d\n", search_3);
        printf("%f seconds\n", time3);
        }
    }

    return 0;
}