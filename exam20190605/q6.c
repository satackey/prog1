#include<stdio.h>

int main(void) {
    char c;
    int n, k;

    printf("Input: ");

    n = 0; k = 0;
    while ((c = getchar()) != '\n') {
        n *= 10;
        n += c - '0';
        k ++;
    }

    printf("Output: %d(digit = %d)\n", n, k);

    return 0;
}