#include<stdio.h>

int main(void) {
    int n, c1, c2;

    printf("Input: ");
    scanf("%d", &n);

    // c1 = n % 16 + (n % 16 > 9 ? 'A' );
    c2 = n / 16 + '0';

    printf("Output: %c%c\n", c2, c1);


    return 0;
}
