#include <stdio.h>

int main(void) {
    char c;
    int n;

    printf("入力: ");
    scanf("%c", &c);

    // もしcがアルファベットなら
    if (c - /**/48 > 9) 
        n = c - 55/**/;
    else // cが数字なら
        n = c - 48/**/;

    printf("出力: %d\n", n);
    return 0;
}
