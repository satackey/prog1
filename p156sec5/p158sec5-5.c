#include<stdio.h>
#include<string.h>

int main(void)
{
    int kingaku[50];
    char shouhin[50][10];
    char work[10];
    int kingaku_work;

    int i, j;
    for (i = 0; scanf("%s %d", shouhin[i], &kingaku[i]) != EOF; i++) {}
    int len = i;

    // printf("%d", len);

    for (i = 0; i < len; i++) {
        for (j = i+1; j < len; j ++) {
            if (strcmp(shouhin[i], shouhin[j]) > 0) {
                // 交換
                strcpy(work, shouhin[i]);
                strcpy(shouhin[i], shouhin[j]);
                strcpy(shouhin[j], work);

                kingaku_work = kingaku[i];
                kingaku[i] = kingaku[j];
                kingaku[j] = kingaku_work;
            }
        }
    }

    int sum = 0;
    printf("\n売上明細\n");
    for (i = 0; i < len; i++) {
        printf("%s %d\n", shouhin[i], kingaku[i]);
        sum += kingaku[i];
    }
    printf("%d", sum);

    return 0;
}
