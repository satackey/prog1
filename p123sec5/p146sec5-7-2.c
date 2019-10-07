#include<stdio.h>
#include<string.h>

int main(void) {
    char sei[19], mei[10];

    printf("姓: ");
    scanf("%s", sei);
    printf("名: ");
    scanf("%s", mei);

    strcat(sei, mei);

    printf("あなたの氏名: %s", sei);
    return 0;
}