#include <stdio.h>

double slow_power(double x, int n);

double power(double x, int n);

int main() {
    printf("2^5 = %f\n", slow_power(2.0, 5));
    printf("2^5 = %f\n", power(2.0, 5));

    return 0;
}

double slow_power(double x, int n) {
    int i;
    double v = 1.0;
    for (i = 0; i < n; i++) {
        v *= x;
    }
    return v;
}

double power(double x, int n) {
    if (n == 0) return 1;
    else if (n % 2 == 0)
        return power(x * x, n / 2);
    else if (n % 2 == 1)
        return x * power(x * x, (n - 1) / 2);
}