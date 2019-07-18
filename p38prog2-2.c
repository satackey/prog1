#include <stdio.h>

int main(void) {
    char input_char;

    printf("英小文字を入力してください: ");
    scanf("%c", &input_char);
    printf("入力した英小文字は\"%c\"で, 大文字にすると\"%c\"です",
        input_char, input_char - (97 - 65));

    return 0;
}
