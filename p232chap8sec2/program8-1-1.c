#include <stdio.h>
#define NEN 18
#define OTONA "大人料金です\n"
#define KODOMO "子ども料金です\n"

#define START int main(void) {
#define END }
START
    int nenrei;

    printf("入場者の年齢を入力: ");
    scanf("%d", &nenrei);

    if(nenrei >= NEN)
        printf(OTONA);
    else
        printf(KODOMO);
    
    return 0;
END