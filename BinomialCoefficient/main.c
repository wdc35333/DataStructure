#include <stdio.h>

int Factorial(int n);
int Combination(int n,int k);
int main() {
    printf("%d",Combination(4,2));
    return 0;
}

int Factorial(int n) {
    if (n == 0) return 1;
    else return n * (Factorial(n - 1));
}
int Combination(int n,int k) {
    if(n == 0 || k == n)  return 1;
    else if(0 < k && k < n) return Factorial(n)/(Factorial(n - k) * Factorial(k));
}