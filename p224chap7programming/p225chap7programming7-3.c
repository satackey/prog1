#include <stdio.h>
#include <string.h>

unsigned short change(char[17]);
unsigned short str_to_bits(char[17]);

int main(void) {
    char input_str[17];
    printf("模範解答を入力してください: ");
    scanf("%s", input_str);

    while (scanf("%s", input_str) != EOF) {
        unsigned short result = change(input_str);
        printf("正解数: %d問\n", result);
    }
    return 0;
}

unsigned short change(char string[17]) {
    static short has_registered = 0;
    static unsigned short mohan = -1;
    if (has_registered == 1) {
        mohan = str_to_bits(string);
        return 0;
    }

    unsigned short kaitou = str_to_bits(string);
    unsigned short result_bits = mohan & kaitou;
        printf("%d\n", kaitou);
        printf("%d\n", result_bits);

    unsigned short ok_count = 0;
    for (int i = 0; i < 16; i++) {
        unsigned short check_bit = 1 << i;
        printf("%d\n", check_bit & result_bits);
        if ((check_bit & result_bits) > 0) {
            ok_count++;
        }
    }

    return ok_count;
}

unsigned short str_to_bits(char string[17]) {
    unsigned short bits;
    for (int i = 0; i < strlen(string); i++) {
        bits += string[i] == '1' ? 1 : 0;
        bits <<= 1;
    }
    return bits;
}