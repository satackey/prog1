#include<stdio.h>

int main(void) {
    int s = 0;
    int i = 0;

    while (i != 10) {
        i++;
        s += i;
        printf("%d\n", s);
    }
    return 0;
}
