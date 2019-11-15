#include <stdio.h>

int even(int
);

int main(void) {
    int inputted_num;
    printf("数字を入力してください:");
    scanf("%d", &inputted_num);
    printf("%d番目の偶数は%dです\n", inputted_num, even(inputted_num));
}

int even(int n) {
    return n == 1 ? 2 : even(n - 1) + 2;
}
