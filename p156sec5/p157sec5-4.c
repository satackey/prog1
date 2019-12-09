#include<stdio.h>
#include<string.h>
#include<math.h>

int check(char str1[10], char str2[10]);
int main(void)
{
    char str1[10], str2[10];

    while (1) {
        printf("文字列を2つ入力してください: ");

        if (scanf("%s %s", str1, str2) == EOF) {
            printf("\n処理を終了します\n");
            break;
        }

        printf("\n");

        int equal = check(str1, str2);
        if (equal) {
            printf("文字列は一致\n");
        } else {
            printf("文字列は不一致\n");
        }
    }

    return 0;
}

int check(char str1[], char str2[]) {
    int equal = 1;
    for (int i = 0; i < max(strlen(str1), strlen(str2)); i++) {
        if (str1[i] == '?' || str2[i] == '?') {
            continue;
        }

        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }

        if (str1[i] == '\0' && str2[i] == '\0') {
            break;
        }
    }
    return equal;
}