#include<stdio.h>

#define URINE(m) ((m) * 1.05)

int ADD(int X) {
    return X + 2;
}

int main(void) {
    int motone;
    scanf("%d", &motone);

    printf("EOF: %d", URINE(motone <= 1000 ? motone : motone - 300));
    return 0;
}