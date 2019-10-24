#include <stdio.h>

int main(void) {
    int min, max, n1, n2;

    printf("Input: ");
    scanf("%d%d", &n1, &n2);

    max = n1 > n2 ? n1 : n2;
    min = n1 > n2 ? n2 : n1;

    while (max > min) {
        max--;
        min++;
    }
    printf("max%d\nmin%d", max, min);
    return 0;
}