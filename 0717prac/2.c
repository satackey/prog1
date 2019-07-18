#include <stdio.h>
int main(void) {
    int min;
    scanf("%d", &min);
    printf("%02dh%dm\n", min/60, min%60);
    return 0;
}