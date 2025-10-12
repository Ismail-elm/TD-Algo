#include "prime.h"

// Algorithme naive pour compter les nombres premiers inférieurs à n
int prime_naive(int n) {
    int c = 0;
    for (int i = 2; i < n; i++) {
        int j;
        for (j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j == i) {c++;}
    }
    return c;
}


// Algorithme plus efficace pour compter les nombres premiers inférieurs à n
int prime_efficace(int n) {
    int count = 0;
    int isPrime[n];
    isPrime[0] = 0; 
    isPrime[1] = 0;
    for (int i = 2; i < n; i++) {
        isPrime[i] = 1;
    }
    for (int p = 2; p * p < n; p++) {
        if (isPrime[p] == 1) {
            for (int i = p * p; i < n; i += p) {
                isPrime[i] = 0;
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}

