#include <stdio.h>

void bin(int);

int main(void) {
    int inputted_num;
    printf("数字を入力してください:");
    scanf("%d", &inputted_num);
    bin(inputted_num);
    return 0;
}

void bin(int n) {
    static int original_n = -1;

    if (original_n == -1) {
        original_n = n;
    }

    if (n >= 2) bin(n / 2);
    printf("%d", n % 2);

    if (n == original_n) {
        printf("\n");
    }

    return;
}