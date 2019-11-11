#include <stdio.h>

int gcm(int, int);

int main(void) {
    int num1, num2;
    printf("数字を2つ入力してください:");
    scanf("%d %d", &num1, &num2);
    printf("最大公約数は%dです\n", gcm(num1, num2));
}

int gcm(int x, int y) {
    int mod = x % y;

    if (mod == 0) {
        return y;
    } else {
        return gcm(y, mod);
    }
}
