#include <stdio.h>

void star(int);

int main(void)
{
    int isosceles;

    printf("二等辺の長さ: ");
    scanf("%d", &isosceles);
    star(isosceles);

    return 0;
}

void star(int n)
{
    if (n > 1) {
        star(n - 1);
    }
    for (int i = 0; i < n; i++) {
        printf("* ");
    }
    printf("\n");
    return;
}
