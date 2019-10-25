#include <stdio.h>

int main(void) {
    int v8 = 'A';
    int v9 = '1' - 1;
    char a, b;

    printf("入力: ");
    scanf("%c%c", &a, &b);

    printf("出力: ");

    // 10の位が10以上の(アルファベットで表せられる)とき
    if (a >= v8)
        if (b >= v8)
            printf("%d\n", (a - v8 + 10) * 16 + b - v8 + 10);
        else
            printf("%d\n", (a - v8 + 10) * 16 + b - v9);
    else
        if(b >= v8)
            printf("%d\n", (a - v9) * 16 + b - v8 + 10);
        else
            printf("%d\n", (a - v9) * 16 + b - v9);
    return 0;
}
