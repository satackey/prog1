#include <stdio.h>

#define FILL1 soukei
#define FILL2 shuukei(in_d)
#define FILL3 in_d
#define FILL4 void shuukei(int x)

void shukkei (int);
int FILL1;
int main(void)
{
    int in_d;

    printf("数字を入力してください (終了は^D):");
    while (scanf("%d", &in_d) != EOF)
    {
        FILL2;
        printf("数字を入力してください (終了は^D):");
    }
    printf("\n集計結果:%dです\n", FILL3);
    return 0;
}

FILL4
{
    soukei += x;
}
