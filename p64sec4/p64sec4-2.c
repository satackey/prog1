// 単元チェック問題4-2②
#include <stdio.h>
int main(void) {
	int a, b, c;

	printf("a = "); scanf("%d", &a);
	printf("b = "); scanf("%d", &b);
	printf("a = %d, b = %d\n", a, b);
	c = 100;

	if ( a != b ) {
		printf("条件式 [ a≠b ] が真です\n");
		if ( a > b ) {
			printf("条件式 [ a＞b ] が真です\n");
			printf("c ← a - b\n");
			c = a - b;
		} else {
			printf("条件式 [ a＞b ] が偽です\n");
		}
	} else {
		printf("条件式 [ a≠b ] が偽です\n");
		printf("c ← 0\n");
		c = 0;
	}

	printf("c = %d\n", c);

	return 0;
}
