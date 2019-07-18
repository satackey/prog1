#include <stdio.h>

int main(void) {
    int input_num;
    char out_char;

    scanf("%d", &input_num);

    out_char = (input_num / 10) * 16 + (input_num % 10);

    printf("%c\n", out_char);


    return 0;
}
