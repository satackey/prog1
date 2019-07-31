#include<stdio.h>

int main(void) {
    int ten[][4] = {{0,0,0,0},{0},{0},{0},{0},{0},{0}};
    int i, j;

    printf("得点を入力してください\n");
    for(i = 1; i <= 6; i++)
    {   for (j = 1; j <= 3; j++)
            scanf("%d", &ten[i][j]);
    }

    /* 得点の集計 */
    for(i = 1; i <= 6; i++)
    {   for (j = 1; j <= 3; j++)
        {
            ten[i][0] += ten[i][j];
            ten[0][j] += ten[i][j];
        }
    }
    int sum = 0;
    for(j = 1; j <= 3; j++)
    {
        sum += ten[0][j];
    }
    
    /* 合計の出力 */
    for(i = 1; i <= 6; i++)
        printf("%d人目の得点合計は%dです\n", i, ten[i][0]);
    for(j = 1; j <= 3; j++)
        printf("第%d科目の得点合計は%dです\n", j, ten[0][j]);
    printf("全得点合計は%dです\n", sum);
    return 0;
}
/*
100
100
100
50
50
50
75
75
75
20
20
20
23
56
89
12
45
78

1人目の得点合計は300です
2人目の得点合計は150です
3人目の得点合計は225です
4人目の得点合計は60です
5人目の得点合計は168です
6人目の得点合計は135です
第1科目の得点合計は280です
第2科目の得点合計は346です
第3科目の得点合計は412です
全得点合計は1038です

^-^

100
50
10
100
50
10
100
50
10
100
50
10
100
50
10
100
50
10
100
50
10
*/