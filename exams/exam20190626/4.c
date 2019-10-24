#include <stdio.h>

int main(void) {
    int m, i, a;

    printf("入力: ");
    scanf("%d", &a);
    for ( m = i = 1; i != a; m *= i) {
        i++;
}
    
    printf("out: %d\n", m);
    return 0;
}