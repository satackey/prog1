#include <stdio.h>

int fibo(int);

int main(void) {
    int inputted_num;
    printf("数字を入力してください:");
    scanf("%d", &inputted_num);
    printf("%d\n", fibo(inputted_num));
    return 0;
}

int fibo(int n) {
    return n < 2 ? 1 : fibo(n-1) + fibo(n-2);
}