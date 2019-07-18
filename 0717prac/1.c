#include <stdio.h>
int main(void) {
    float f = 0, ans = 0;
    scanf("%f", &f);
    ans = 5.0/9.0 * (f-32.0);
    printf("%8.2f\n", ans);
    return 0;
}

