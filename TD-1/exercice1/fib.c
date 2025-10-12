#include "fib.h"

// Algorithme naif pour calculer le n-ième nombre de Fibonacci
int fibo_recursive(int n) {
    if (n <= 1) return n;
    return fibo_recursive(n - 1) + fibo_recursive(n - 2);
}

// Algorithme avec mémoization pour calculer le n-ième nombre de Fibonacci
int memo[100] = {0};
int fibo_memo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fibo_memo(n - 1) + fibo_memo(n - 2);
    return memo[n];
}

