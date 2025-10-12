#include <stdio.h>
#include <time.h>
#include "fib.h"

void main() {
    int n = 38;
    
    // Exemple fibonnaci avec algorithme naif
    clock_t start1 = clock();
    int result_1 = fibo_recursive(n);
    clock_t end1 = clock();
    double time_taken1 = ((double)(end1 - start1)) / CLOCKS_PER_SEC;
    printf("fibo-naif[%d]: %d, time_taken: %f seconds\n", n, result_1, time_taken1);

    // Exemple fibonnaci avec mémoization
    for (int i = 0; i < 100; i++) {memo[i] = -1;}
    clock_t start2 = clock();
    int result_2 = fibo_memo(n);
    clock_t end2 = clock();
    double time_taken2 = ((double)(end2 - start2)) / CLOCKS_PER_SEC;
    printf("fibo-memo[%d]: %d, time_taken: %f seconds\n", n, result_2, time_taken2);
}