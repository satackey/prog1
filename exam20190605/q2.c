#include<stdio.h>

int main(void) {
    char c;
    int n;

    printf("Input: ");
    scanf("%d", &n);

    if (n > 9)
        c = n - 10 + 'A';
    else
        c = n + '0';

    printf("Output: %c\n", c);

    return 0;
}
