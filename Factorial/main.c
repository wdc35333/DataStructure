#include <stdio.h>

int factorial(int n);

int factorial_iter(int n);

int sub(int n);

int sub_iter(int n);

int main() {
    printf("%d\n", factorial_iter(6));
    printf("%d\n", factorial(6));
    printf("%d\n", sub(10));
    printf("%d\n", sub_iter(10));
    return 0;
}


int factorial(int n) {
    if (n <= 1) return 1;
    else return (n * factorial(n - 1));

}

int factorial_iter(int n) {
    int k, v = 1;
    for (k = n; k >= 1; k--) {
        v *= k;
    }
    return v;
}

int sub(int n) {
    if (n < 0) return 0;
    return n + sub(n - 3);
}

int sub_iter(int n) {
    int i, v = 0;
    for (i = n; i > 0; i -= 3) {
        v += i;
    }
    return v;
}