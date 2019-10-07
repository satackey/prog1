#include<stdio.h>

int main(void)
{
    int num = 0;
    int kuku[9];

    while (1) {
        printf("数字(1~9)を入力してください: ");
        scanf("%d", &num);

        if (num >= 1 && num <= 9) {
            break;
        }
        printf("入力が間違っています\n");
    }

    for (int i = 0; i < 9; i++) {
        kuku[i] = num * (i+1);
    }

    for (int i = 0; i < 9; i++) {
        printf("%d ", kuku[i]);
    }
    printf("\n");

    return 0;
}
