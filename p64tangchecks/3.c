#include<stdio.h>

int main(void) {
    int nenrei;
    printf("�N�����͂��Ă�������: ");
    scanf("%d", &nenrei);

    if (nenrei > 12 && nenrei < 60) 
        printf("���ʗ����ł�\n");
    else {
        if (nenrei >= 60) 
            printf("����Ҋ��������ł�\n");
        else
            printf("���w�������ł�\n");
    }
    
    return 0;
}
