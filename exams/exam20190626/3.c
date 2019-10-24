#include <stdio.h>

int main(void) {
    int age;

    printf("入力: ");
    scanf("%d", &age);

    printf("出力: ");

    if (age < 13) {
        printf("syokugakusei");
    } else if (age > 59)
        printf("koureisya");
    else
        printf("normal");
    return 0;
}