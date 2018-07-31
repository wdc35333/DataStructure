#include <stdio.h>

void recursive(int n);
void asterisk(int i);
void unknown()
{
    int ch;
    if((ch = getchar()) != '\n')
        unknown();
    putchar(ch);
}
int main() {
    unknown();
    return 0;
}

//int recursive(int n) {
//    printf("%d\n", n);
//    if (n < 1) return 2;
//    else return (2 * recursive(n - 1) + 1);
//}

//int recursive(int n){
//    printf("%d\n",n);
//    if(n < 1) return -1;
//    else return ( recursive(n-3) + 1);
//}


void recursive(int n) {
    if (n != 1) recursive(n - 1);
    printf("%d\n", n);
}

void asterisk(int i) {
    if(i > 1) {
        asterisk(i / 2);
        asterisk(i / 2);
    }
    printf("*");
}