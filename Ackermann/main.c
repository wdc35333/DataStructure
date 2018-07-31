#include <stdio.h>

int Ackermann(int m, int n);

int main() {
    printf("%d %d\n",Ackermann(3,2),Ackermann(2,3));
    return 0;
}

int Ackermann(int m, int n) {
    if (m == 0) return n + 1;
    else if (n == 0) return Ackermann(m - 1, 1);
    else if (m >= 1 && n >= 1)return Ackermann(m - 1, Ackermann(m, n - 1));
}