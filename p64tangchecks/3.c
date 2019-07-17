#include<stdio.h>

int main(void) {
    int nenrei;
    printf("”N—î‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    scanf("%d", &nenrei);

    if (nenrei > 12 && nenrei < 60) 
        printf("•’Ê—¿‹à‚Å‚·\n");
    else {
        if (nenrei >= 60) 
            printf("‚—îÒŠ„ˆø—¿‹à‚Å‚·\n");
        else
            printf("¬Šw¶—¿‹à‚Å‚·\n");
    }
    
    return 0;
}
