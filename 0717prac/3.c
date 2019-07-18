#include <stdio.h>
#include <math.h>

int main(void) {
    int principal;
    float rate;
    int years;

    scanf("%d", &principal);
    scanf("%f", &rate);
    scanf("%d", &years);

    float result = (float)principal;

    rate = rate / 100.0 + 1;
    for (int i=1; i <= years; i++) {
        result = result * rate;
        printf("%d year: ¥%d\n", i, (int)result);
        
    }
}