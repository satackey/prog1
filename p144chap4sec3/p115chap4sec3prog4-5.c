#include <stdio.h>
int souwa(int);
int main(void)
{
    printf("1～10の総和は%dです\n", souwa(10));
    return 0;
}

int souwa(int n)
{
    if (n < 2) 
        return 1;
    else
        return (n + souwa(n - 1));
}
