#include <stdio.h>

int main(void) {
    char suuji, moji;
    printf("キーボードから数字を2つ入力してください:");
    scanf("%d %c", &suuji, &moji);
    scanf("%d%c", &suuji, &moji);
    // scanf("%d,%c", &suuji, &moji);


    printf("1つ目は，数値を%dとしました。16進で表示すると%02xです\n", suuji, suuji);
    printf("1つ目は，文字を%cとしました。16進で表示すると%02xです\n", moji, moji);

    return 0;
}

// %+c