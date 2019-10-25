#include <stdio.h>
#include <string.h>

#define FILL1 5
#define FILL2 n
#define FILL3 !=
#define FILL4 ==
#define FILL5 ||
#define FILL6 continue
#define FILL7 !=
#define FILL8 break
#define FILL9 k
#define FILL10 moji_2[i]

int main( void ) {
    char moji_1[FILL1][10], moji_2[FILL1][10];
    int i, n, k;

    for ( i = 0; i < FILL1; i ++ ) {
        printf("[%2d] 二つの文字列（CTRL+Dで終了）... ", i + 1);
        if ( scanf("%s%s", moji_1[i], moji_2[i]) == EOF ) {
            putchar('\n');
            break;
        }
    }
    n = i;

    for ( i = 0; i < FILL2; i ++ ) {
        if ( strlen( moji_1[i] ) FILL3 strlen( moji_2[i] ) )
            printf("[%2d] %s と %s は一致しません\n", i + 1, moji_1[i], moji_2[i]);
        else if ( strcmp ( moji_1[i], moji_2[i]) FILL4 0 )
            printf("[%2d] %s と %s は一致しました\n", i + 1, moji_1[i], moji_2[i]);
        else {
            for ( k = 0; k < strlen( moji_1[i] ); k ++ ) {
                if ( moji_1[i][k] == '?' FILL5 moji_2[i][k] == '?')
                    FILL6;
                if ( moji_1[i][k] FILL7 moji_2[i][k]) {
                    printf("[%2d] %s と %s は一致しません\n", i + 1, moji_1[i], moji_2[i]);
                    FILL8;
                }
            }
            if ( FILL9 >= strlen( FILL10 ) ) {
                printf("[%2d] %s と %s は一致しました\n", i + 1, moji_1[i], moji_2[i]);
            }
        }
    }

    return 0;
}