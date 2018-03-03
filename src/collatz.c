
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

static int collatz_rec(int n, int sub){
    return  n > 1 ? collatz_rec((n & 1) ? (n * 3 + 1) / 2 : n >> 1, sub + 1 + (n & 1)) : sub;
}

static uint64_t collatz_rec_ull(uint64_t n, uint64_t sub){
    return  n > 1 ? collatz_rec_ull((n & 1ULL) ? (n * 3ULL + 1ULL) / 2ULL : n / 2ULL, sub + 1ULL + (n & 1)) : sub;
}

uint64_t collatz(int n){
    return collatz_rec(n, 0);
}

uint64_t collatz_ull(uint64_t n){
    return collatz_rec_ull(n, 0ULL);
}
