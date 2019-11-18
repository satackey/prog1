#include <stdio.h>

void print(void);
int val[5] = {1, 2, 3, 4, 5};

int main(void) {
    return 0;
}

void print(void) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", val[i]);
        
    }
}