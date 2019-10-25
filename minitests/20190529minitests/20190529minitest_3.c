#include <stdio.h>

int main(void) {
    char c;
    int n;

    printf("入力: ");
    scanf("%d", &n);

    if (n > 9)
        c = n + 55;
    else
        c = n + 48;

    printf("出力: %c\n", c);
    return 0;
}

