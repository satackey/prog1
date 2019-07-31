#include<stdio.h>

int main(void)
{
    int time_12[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int time_24[2][12], i;

    for(i = 0; i < 12; i++)
    {
        time_24[0][i] = time_12[i];
        time_24[1][i] = time_24[0][i] + time_12[11];
    }

    for(i = 0; i < 12; i++)
        printf("%2d時は午後%2d時\n", time_24[1][i], time_24[0][i]);
    return 0;
}