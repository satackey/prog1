#include <stdio.h>
#include <string.h>

int main(void) {
    char s[17] = "This is a pen.";
    // printf("input: ");
    // fgets(s, sizeof(s), stdin);
    // printf("s: %s\n", s);
    char reversed_s[16];
    int word_end = strlen(s);
    for (int i = strlen(s); i > 0; i--) {
        if (s[i] != '\0' && s[i] != '\n' && s[i] != ' ') {
            continue;
        }

        printf("i: %d, word_start: %d\n", i, word_end);
        char tmp[16];
        strncpy(tmp, &s[i+1], word_end - i);
        tmp[word_end - i + 1] = '\0';
        printf("word: %s\n", tmp);

        // strncpy(&reversed_s[strlen(s) - i], &s[word_start], i - word_start);
        word_start = i - 1;
    }

    printf("reversed: %s", reversed_s);
    

    return 0;
}