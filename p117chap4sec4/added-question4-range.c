#include <stdio.h>

int nazo(int);

int main(void) {
    int inputted_num;
    printf("数字を入力してください:");
    scanf("%d", &inputted_num);
    printf("%d\n", nazo(inputted_num));
    return 0;
}

int nazo(int x) {
    if (x > 0 && x < 4) {
        return x;
    }

    printf("整数値: ");
    scanf("%d", &x);
    return nazo(x);
}
