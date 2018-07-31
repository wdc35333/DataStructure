#include <stdio.h>

float FractionalPlus(float n);

int main() {
    printf("%f\n", FractionalPlus(2));
    return 0;
}

float FractionalPlus(float n) {
    if(n == 1) return 1;
    else return 1 / n + FractionalPlus(n-1);
}