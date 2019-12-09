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


    printf("sizeof(suuchi_1) = %ldバイト\n", sizeof(suuchi_1));
    printf("sizeof(suuchi_2) = %ldバイト\n", sizeof(suuchi_2));
    printf("sizeof(kekka) = %ldバイト\n", sizeof(kekka));
    return 0;
}