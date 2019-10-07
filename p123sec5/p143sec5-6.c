#include<stdio.h>
#include<string.h>

int main(void) {
    char alpha[10], msg[4] = "day";

    strcpy(alpha, "Happy ");
    printf("%s", alpha);
    strcpy(alpha, msg);
    printf("%s", alpha);

    return 0;
}