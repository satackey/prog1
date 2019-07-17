#include<stdio.h>

int main(void) {
    int eiji, i = 0;
    printf("type some alphabet characters: ");

    while ((eiji = getchar()) != '\n') {
        if ((eiji < 'A') || (eiji > 'Z'))
            continue;
        putchar(eiji + 'a' - 'A');
        i++;
        if (i >= 10)
            break;
    }
    return 0;
}
