#include<stdio.h>

int main(void) {
    char c;
    int i, n;

    printf("Input: ");
    n = 0;

    for (i = 0; i < 2; i++) {
        n *= 10;
        scanf("%c", &c);
        n += c -'0';
    }

    printf("Output: %d\n", n);

    return 0;
}