#include<stdio.h>

int main(void) {
    char c1, c2;
    int n;

    printf("Input: ");
    scanf("%x", &n);
    
    c1 = n % 10 + '0';
    if (n > 9)
        c2 = n / 10 + '0';
    else
        c2 = ' ';

    printf("Output: %c%c\n", c2, c1);

    return 0;
}
