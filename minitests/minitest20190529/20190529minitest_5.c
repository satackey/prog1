#include <stdio.h>

int main(void) {
    char c;
    int i, n, x;

    int v8 = 'A';
    int v9 = '0';
    int v10 = 1;

    printf("入力: ");

    n = 0;

    for (i = 0; i < 2; i++) {
        n *= v10;
        scanf("%c", &c);
        if (c >= v8)
            x = c - v8 + 10;
        else
            x = c - v9;
        printf("%d\n", x);
        n += x;
    }
    printf("出力: %d\n", n);
    return 0;
}
