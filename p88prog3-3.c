#include <stdio.h>

int main(void) {
    char in;
    short is_last_return = 1;
    short is_number_typing = 0;
    int price = 0;
    short rate = 100;
    while ((in = getchar()) != '\n') {
        switch (in) {
            case 'T':
                // putchar(' ');
                // putchar(' ');
                printf("  ");
                is_last_return = 0;
                break;
            
            case 'N':
                printf("\n");
                is_last_return = 1;
                break;
            
            case '+':
                printf("%d", price * rate);
                printf(" ");
                is_last_return = 0;
                is_number_typing = 0;
                break;
            
            case '$':
                printf("\\");
                is_number_typing = 1;
                price = 0;
                break;

            case '-':
                printf("%d", price * rate);
                is_number_typing = 0;
                // -はそのまま出力するので break しない

            default:
                if (is_number_typing) {
                    price *= 10;
                    int n = in - '0';
                    price += n;
                    break;
                }
                if (is_last_return && 'a' <= in && in <= 'z') {
                    in -= 'a' - 'A';
                }
                putchar(in);
                is_last_return = 0;
                break;
        }
    }
    

    return 0;
}
// aprilT$012-NmayTT$023+Njune T$026+N