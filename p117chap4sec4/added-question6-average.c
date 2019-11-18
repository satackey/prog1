#include <stdio.h>

float average(int val[], int n);
int val[5] = {2, 7, 8, 1, 4};

int main(void) {
    printf("%f\n", average(val, 5));
    return 0;
}

float average(int val[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += val[i];
    };
    return sum / n;
}