#include<stdio.h>

int main(void)
{
    char str1[10], str2[10];

    while (1) {
        printf("文字列を2つ入力してください: ");
        // int result = 

        if (scanf("%s %s", str1, str2) == EOF) {
            printf("\n処理を終了します\n");
            break;
        }

        int equal = 1;
        for (int i = 0; i < 10; i++) {
            if (str1[i] == '?' || str2[i] == '?') {
                continue;
            }

            if (str2[i] != str2[i]) {
                equal = 0;
                break;
            }
        }

        if (equal) {
            printf("文字列は一致");
        } else {
            printf("文字列は不一致");
        }
        printf("\n");
    }

    return 0;
}
