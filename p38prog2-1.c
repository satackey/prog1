#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("2つの数値を入力: ");
    scanf("%d %d", &n1, &n2);

    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
    printf("%d %% %d = %d\n", n1, n2, n1 % n2);

    return 0;
}
