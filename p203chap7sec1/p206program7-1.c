#include <stdio.h>
int main(void)
{
    short data_a = 1000 ;
    long  data_b = 20000 ; // 20000L でも良い
    char  data_c ;

    printf("%d+%ld = %ld\n", data_a, data_b, data_a + data_b);
    data_c = data_a + data_b ;
    printf("%d+%ld = %d\n", data_a, data_b, data_c);

    printf("sizeof(data_a) = %ldバイト\n", sizeof(data_a));
    printf("sizeof(data_b) = %ldバイト\n", sizeof(data_b));
    printf("sizeof(data_c) = %ldバイト\n", sizeof(data_c));
    return 0;
}