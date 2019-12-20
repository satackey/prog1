#include <stdio.h>

int main(void) {
    unsigned int compressed = 0;
    char inputted[9];
    scanf("%s", &inputted);
    for (int i = 0; i < 8; i++) {
        int inputted_num = inputted[i] - '0';
        compressed <<= 4;
        compressed |= inputted_num;
    }

    printf("Compressed: 0x%x\n", compressed);
    return 0;
}