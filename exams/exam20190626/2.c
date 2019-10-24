#include <stdio.h>

int main(void) {
    int n1, n2, c1, c2;
    n1 = 0;
    n2 = 0;

    printf("“ü—Í: ");
    scanf("%c%c", &n1, &n2);
    
    if ('A' <= n1 && n1 <= 'Z')
        n1 += 'a' - 'A';
    c1 = n1 - '0' > 9 ? n1 - 'a' + 10 : n1 - '0';

    if ('A' <= n2 && n2 <= 'Z')
        n2 += 'a' - 'A';
    c2 = n2 - '0' > 9 ? n2 - 'a' + 10 : n2 - '0';

    printf("o—Í: %d\n", c1 * 16 + c2);
    return 0;
}