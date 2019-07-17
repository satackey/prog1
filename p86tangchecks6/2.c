#include<stdio.h>

int main(void) {
    int a = 1;
    int b = 2;
    int c = 3;

    printf("%s\n", a ? "True" : "False");
    a = 1; b = 2; c = 3;
    printf("%s\n", b == a++ ? "True" : "False");
    a = 1; b = 2; c = 3;
    printf("%s\n", b == ++a ? "True" : "False");
    a = 1; b = 2; c = 3;
    printf("%s\n", a != b && b > c ? "True" : "False");
    a = 1; b = 2; c = 3;
    printf("%s\n", a != b || b > c ? "True" : "False");
    a = 1; b = 2; c = 3;
    printf("%s\n", b == b <= c ? "True" : "False");
    a = 1; b = 2; c = 3;
    
    return 0;
}
