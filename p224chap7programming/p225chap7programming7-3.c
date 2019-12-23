#include <stdio.h>
#include <string.h>

unsigned short change(unsigned char[17]);
unsigned short str_to_bits(unsigned char[17]);

int main(void) {
    char input_str[17];
    printf("模範解答を入力してください: ");
    scanf("%s", input_str);
    change(input_str);

    while (scanf("%s", input_str) != EOF) {
        unsigned short result = change(input_str);
        printf("正解数: %d問\n", result);
    }
    return 0;
}

unsigned short change(unsigned char string[17]) {
    static short has_registered = 0;
    static unsigned short mohan = 0;
    if (has_registered != 1) {
        mohan = str_to_bits(string);
        has_registered = 1;
        return 0;
    }

    unsigned short kaitou = str_to_bits(string);
    unsigned short result_bits = mohan ^ kaitou;
    printf("m%d\n", mohan);
    printf("k%d\n", kaitou);
    printf("r%d\n", result_bits);

    unsigned short ok_count = 16;
    for (int i = 0; i < 16; i++) {
        if (result_bits & 1) {
            ok_count--;
        }
        printf("%d\n", result_bits);
        result_bits >>= 1;
    }

    return ok_count;
}

unsigned short str_to_bits(unsigned char string[17]) {
    unsigned short bits;
    for (int i = 0; i < strlen(string); i++) {
        bits += string[i] == '1' ? 1 : 0;
        bits <<= 1;
    }
    return bits;
}