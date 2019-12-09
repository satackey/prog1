#include<stdio.h>
int main(void)
{
    int suuchi_1 = 100, suuchi_2 = 3;
    double kekka;

    kekka = suuchi_1 / suuchi_2;
    printf("キャスト演算子を使用しない          :%f\n", kekka);
    kekka = (double)suuchi_1 / suuchi_2;
    printf("キャスト演算子を使用した            :%f\n", kekka);
    kekka = (double)(suuchi_1 / suuchi_2);
    printf("キャスト演算子を全体の括弧に使用した:%f\n", kekka);
    return 0;
}