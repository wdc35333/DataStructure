#include <stdio.h>
int Plus(int n);
int main() {
    printf("%d\n",Plus(10));
    return 0;
}


int Plus(int n) {
    if(n == 1)   return 1;
    else return (n + Plus(n-1));
}