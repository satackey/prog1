#include <stdio.h>

int main(void) {
    char place_1, place_10;
    char out_char;

    scanf("%c%c", &place_10, &place_1);

    out_char = place_1 - '0';
    out_char = place_1-'0' + (place_10-'0')*16;

    printf("%c\n", out_char);


    return 0;
}
