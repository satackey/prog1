// 単元チェック問題4-2②
#include <stdio.h>
int main(void) {
	int a, b, c;

	printf("a = "); scanf("%d", &a);
	printf("b = "); scanf("%d", &b);
	printf("a = %d, b = %d\n", a, b);
	c = 100;

	if ( a != b )
		if ( a > b )
			c = a - b;
	else
		c = 0;

	printf("c = %d\n", c);

	return 0;
}
