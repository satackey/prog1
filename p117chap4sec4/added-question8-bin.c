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
    if (n >= 2) {
        bin(n / 2);
        printf("%d", n % 2);
        return;
    }
    printf("%d\n", n % 2);
    return;
}