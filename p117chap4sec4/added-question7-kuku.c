#include <stdio.h>

void kuku(int);

int main(void) {
    int inputted_num;
    printf("数字を入力してください:");
    scanf("%d", &inputted_num);
    kuku(inputted_num);
    return 0;
}

void kuku(int n) {
    if (n < 9) kuku(n+1);
    for (int i = 1; i <= 9; i++) {
        printf("%d\t", n * i);
    }
}