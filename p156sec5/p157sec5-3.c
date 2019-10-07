#include<stdio.h>

int main(void)
{
    int pas_t[10][10];

    // 初期化
    for (int i = 0; i < 10; i++) {
        pas_t[0][i] = 1;
        pas_t[i][0] = 1;
    }

    for (int col_i = 1; col_i < 10; col_i++) {
        for (int row_i = 1; row_i < 10 - col_i; row_i++) {
            pas_t[col_i][row_i] = pas_t[col_i-1][row_i] + pas_t[col_i][row_i-1];
        }
    }

    for (int col_i = 0; col_i < 10; col_i++) {
        for (int row_i = 0; row_i < 10 - col_i; row_i++) {
            printf("%d\t", pas_t[col_i][row_i]);
        }
        printf("\n");
    }

    return 0;
}
