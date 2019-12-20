#include <stdio.h>
#include <string.h>

void angou(unsigned char[32]);

int main(void) {
    char input_string[32];

    scanf("%s", input_string);

    for (int i_encrypt = 0; i_encrypt < 2; i_encrypt++) {
     
        printf(i_encrypt == 0 ? "暗号化前: " : "暗号化後: ");
        for (int i = 0; i < strlen(input_string); i++) {
            printf("%x ", (unsigned char)input_string[i]);
        }
        printf("\n");

        if (i_encrypt == 0) angou(input_string);
    }
    return 0;
}

void angou(unsigned char string[32]) {
    for (int i = 0; i < strlen(string); i++) {        
        int original_upper = (string[i] & 0b11110000) >> 4;
        int original_lower = string[i] & 0b1111;
        string[i] = original_upper + (original_lower << 4);
    }
}