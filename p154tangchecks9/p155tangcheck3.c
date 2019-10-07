#include <stdio.h>
#include <string.h>

int main(void)
{
    char i_buf[4][10], shimei[20];
    int i, sei_cnt;

    printf("新郎の氏名: ");
    scanf("%s %s", i_buf[0], i_buf[1]);
    printf("新婦の氏名: ");
    scanf("%s %s", i_buf[2], i_buf[3]);

    for (i = 0; i < 4; i++)
        i_buf[i][0] = toupper(i_buf[i][0]);
    
    sei_cnt = strlen(i_buf[0]);
    i_buf[0][sei_cnt] = '\0';
    i_buf[0][sei_cnt + 1] = '\0';
    
    

}