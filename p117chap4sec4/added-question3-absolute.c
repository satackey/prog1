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
    // return x > 0 ? x : nazo(-x);
    return x >= 0 ? x : nazo(-x);
}
