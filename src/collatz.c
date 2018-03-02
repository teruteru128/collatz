
static int collatz_rec(int n, int sub){
    return  n > 1 ? collatz_rec((n & 1) ? n * 3 + 1 : n >> 1, sub + 1) : sub;
}

int collatz(int n){
    return collatz_rec(n,0);
}
