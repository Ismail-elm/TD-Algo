#include <stdio.h>
#include <time.h>
#include "prime.h"

void main() {
    int n = 10000;
    // Exemple nombres premiers avec algorithme naive  
    clock_t start1 = clock();
    int result_1 = prime_naive(n);
    clock_t end1 = clock();
    double time_taken1 = ((double)(end1 - start1)) / CLOCKS_PER_SEC;
    printf("(naive-algorithme) the number of primes less than %d is: %d, time_taken: %f seconds\n", n, result_1, time_taken1);


    // Exemple nombres premiers avec algorithme efficace  
    clock_t start2 = clock();
    int result_2 = prime_efficace(n);
    clock_t end2 = clock();
    double time_taken2 = ((double)(end2 - start2)) / CLOCKS_PER_SEC;
    printf("(efficient-algorithme) the number of primes less than %d is: %d, time_taken: %f seconds\n", n, result_2, time_taken2);
}
