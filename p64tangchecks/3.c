#include<stdio.h>

int main(void) {
    int nenrei;
    printf("年齢を入力してください: ");
    scanf("%d", &nenrei);

    if (nenrei > 12 && nenrei < 60) 
        printf("普通料金です\n");
    else {
        if (nenrei >= 60) 
            printf("高齢者割引料金です\n");
        else
            printf("小学生料金です\n");
    }
    
    return 0;
}
