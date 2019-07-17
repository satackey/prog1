#include <stdio.h>

int main(void) {
    char c;
    int n;

    printf("入力: ");
    n = 0;
    while (1) {
        c = getchar();
        if ( c == '\n')
            break;
        n *= 2;
        n += c - '0';
    }
    printf("出力: %d\n", n);
    return 0;
}