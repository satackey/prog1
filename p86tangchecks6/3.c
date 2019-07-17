#include<stdio.h>

int main(void) {
    int dai, shou, work1, work2;

    printf("Type 2 numbers: ");
    scanf("%d %d", &work1, &work2);

    dai = work1 > work2 ? work1 : work2;
    shou = work1 < work2 ? work1 : work2;
    for ( ; dai > shou; dai--, shou++);
    printf("Average is %d.", dai);
    
    return 0;
}
